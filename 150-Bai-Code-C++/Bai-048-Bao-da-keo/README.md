###  VTrò chơi oẳn tù tì" trò chơi có 2 người chơi mỗi người dùng tay để hiện thị 1 trong 3 công cụ sau: kéo bao và búa quy tắc như sau:
- kéo thắng bao
- bao thắng búa
- búa thắng kéo
#### viết trương trình mô phỏng cho 2 người chơi và người chơi với máy.

Ví dụ sinh số ngẫu nghiên

```sh
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
    int r;
    srand((int)time(0));
    for(int i = 0; i < 5; ++i){
        r = rand();
        printf("Rand %d is %d\n",i, r);
    }    
}
 
```