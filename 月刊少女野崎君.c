#include <stdio.h>     
#include <string.h>     
#include <stdlib.h>      
#include <Windows.h>    
#include <assert.h>


void gotoxy(int x, int y)
{
 COORD pos; pos.X = x - 1; pos.Y = y - 1;  
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
 system("color f0");
 system("mode con cols=150 lines=55");
 long i;        //创建变量 i，用于存储（.txt）文件个数
 char FileName[100];     //创建数组 FileName[]，用于存储文件名称，文件名称最大不超过100个符号
 char hi[18000];     //这里是字符数组，用于存储从文件读取出的字符串
 FILE *in;   
 system("d:\\Users\\DELL\\Desktop\\月刊少女野崎君.M4A");
 Sleep(0);  
 for (i=1;i<=6171;i++)//i 的范围转换为(.txt)文件的个数
 {
  sprintf(FileName, "d:\\Users\\DELL\\Desktop\\月刊\\ASCII-月刊少女野崎君%04d.txt", i);
 
  in = fopen(FileName, "r");
  assert(in!=NULL);  //断言结构体指针 in 不为空
 
  fread(hi,1,18000,in);//改 ,这是你一个TXT文件里的字符串. 
 
  printf("%s\n%d", hi, i);
  gotoxy(1, 1);   //每次打印完，将光标移动到最前面，使下次打印依然在开头开始打印
  Sleep(26);//等待27毫秒执行
  fclose(in);
 }

}
