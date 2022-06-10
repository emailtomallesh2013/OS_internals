#include "types.h"
//#include "stat.h"
#include "user.h"
//#include "fs.h"


int main()
{
int ppid = getppid();
printf(1,"parent pid is %d", ppid);
return 0;
}

