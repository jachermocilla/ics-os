#include "../../sdk/dexsdk.h"
#define KCHOWN_SERVICE_NO 0xC2
int main(int argc, char *argv[]) {
   if (argc < 4){
      printf("Usage: chown.exe <fd> <uid> <gid>\n");
      return -1;
   }
   dexsdk_systemcall(KCHOWN_SERVICE_NO, atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), 0, 0);
   return 0;
}