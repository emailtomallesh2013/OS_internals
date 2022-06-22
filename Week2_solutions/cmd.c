#include "types.h"
#include "stat.h"
#include "user.h"
#include "stddef.h"


int main(int argc, char **argv)
{
	if(argc<=1){
        exit();
    }
    char **args = argv;
    for(int i=1;i<argc;i++){
        args[i-1] = argv[i];
    }
    args[argc-1] = NULL;

    for( int i=0; i< argc; i++)
    {
//	    printf(1,"args[%d] = %s\n", i, args[i]);
    }
    // Implement your code here
    
    int pid;

    pid = fork();

    if(pid==0){
//      printf(1,"Child Process\n");
      exec(args[0], args);
      printf(2, "exec %s failed\n", args[0]);
    }
    else{
//      printf(1,"Parent Process child pid=%d\n", pid);
        wait();
    }

    // 
    
    exit();
    return 0;
}
