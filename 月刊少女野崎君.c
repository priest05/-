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
 long i;        //�������� i�����ڴ洢��.txt���ļ�����
 char FileName[100];     //�������� FileName[]�����ڴ洢�ļ����ƣ��ļ�������󲻳���100������
 char hi[18000];     //�������ַ����飬���ڴ洢���ļ���ȡ�����ַ���
 FILE *in;   
 system("d:\\Users\\DELL\\Desktop\\�¿���ŮҰ���.M4A");
 Sleep(0);  
 for (i=1;i<=6171;i++)//i �ķ�Χת��Ϊ(.txt)�ļ��ĸ���
 {
  sprintf(FileName, "d:\\Users\\DELL\\Desktop\\�¿�\\ASCII-�¿���ŮҰ���%04d.txt", i);
 
  in = fopen(FileName, "r");
  assert(in!=NULL);  //���Խṹ��ָ�� in ��Ϊ��
 
  fread(hi,1,18000,in);//�� ,������һ��TXT�ļ�����ַ���. 
 
  printf("%s\n%d", hi, i);
  gotoxy(1, 1);   //ÿ�δ�ӡ�꣬������ƶ�����ǰ�棬ʹ�´δ�ӡ��Ȼ�ڿ�ͷ��ʼ��ӡ
  Sleep(26);//�ȴ�27����ִ��
  fclose(in);
 }

}
