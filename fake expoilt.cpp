#include<bits/stdc++.h>
#include <Windows.h>
using namespace std;
char table[24] = {'A',
'B',
'C',
'D',
'E',
'F',
'G',
'H',
'I',
'J',
'K',
'L',
'M',
'N',
'O',
'P',
'Q',
'R',
'S',
'T',
'U',
'V',
'X',
'Y'};
void SetColor(int color = 7)
{
  HANDLE hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole,color);
}

int main(){
    SetColor(10);
    cout<<"成績系統破解"<<endl;
    cout<<"請輸入帳號 : ";
    string a;
    cin>>a;
    cout<<endl<<"連結網站中...";
    Sleep(2000);
    int i=0;
    srand(time(NULL));
    for(int j=0;j<3000;j++){
        SetColor(15);
        cout<<table[rand()%25];
        cout<<rand()%2+1;
        for(i=0;i<8;i++){
            cout<<rand()%10;
        }
        i=0;
        SetColor(192);
        cout<<endl<<"Login Fail"<<endl;
    }
    SetColor(15);
    cout<<"Q221561175"<<endl;
    SetColor(160);
    cout<<"Login Sucess"<<endl;
    Sleep(3000);
     SetColor(15);
    cout<<"Your Accout is: ";
     SetColor(160);
     cout<<"a411"<<endl;
      SetColor(15);
    cout<<"Your Password is : ";
     SetColor(160);
     cout<<"Q221561175"<<endl;
     SetColor(15);
}
