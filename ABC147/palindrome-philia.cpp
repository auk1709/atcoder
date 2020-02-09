#include <stdio.h>
#include <string.h>

int main(){
  char str[100];

  scanf("%s", str);

  int cnt =0;
  int i = 0;

  cnt = strlen(str);

  int down = cnt - 1;
  int up = 0;
  int result = 0;
  while(down - up > 0){
    if(str[up] != str[down]){
      result++;
    }
    up++;
    down--;
  }

  printf("%d\n", result);

  return 0;
}