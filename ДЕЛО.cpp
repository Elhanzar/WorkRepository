/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>      
#include <string>
using namespace std;
struct delo {
    int size=2;
    string* model = new string[size];
    string* price = new string[size];
    string* weight = new string[size];
    int* power = new int[size];
    int* gearbox = new int[size];
    int* mon=new int[size];
    int* yer=new int[size];
    int* min=new int[size];

}m;

void add() {
    for (int i = 0; i < m.size; i++)
    {   cout <<" Дело №"<<i<<endl;
        cout << "Внесите название:";
        getline(cin,m.model[i]);
        getline(cin,m.model[i]);
        cout << "Внесите приоритет:";
        getline(cin,m.price[i]);
        cout << "Внесите описание:";
        getline(cin,m.weight[i]);
        
        cout << "Внесите день:";
        cin>>m.power[i];
        cout<<"Внесите месяц:";
        cin>>m.mon[i];
        cout<<"Внесите год:";
        cin>>m.yer[i];
        cout << "Внесите час:";
        cin>>m.gearbox[i];
        cout<<"Внесите минуты:";
        cin>>m.min[i];
        cout<<endl;
      if(m.power[i]>31 | m.mon[i]>12 | m.yer[i]>3000 | m.gearbox[i]>23| m.min[i]>59)
        {
            cout<<"Не правильно ввели дату или время."<<endl;
            break;
        }
    
    }
    
}
void print () {
    for (int i = 0; i < m.size; i++)
    {
        cout<<endl;
        cout <<" Дело №"<<i<<endl;
        cout << "название:" << m.model[i] << endl;
        cout << "приоритет:" << m.price[i] << endl;
        cout << "описание:" << m.weight[i] << endl;
        cout <<"Дата :"<<m.power[i]<<"."<<m.mon[i]<<"."<<m.yer[i]<<endl;
        cout<<"Время :"<<m.gearbox[i]<<":"<<m.min[i]<<endl;
    }
}
void po() {
    
    int input;
    int dat;
    int mes;
    int god;
    int chas;
    int minut;
    string* nop=new string[2];
    bool exit = false;
    do{
    cout<<"чтобы   найти по названию, описанию и приоритету    нажмите   1"<<endl;
    cout<<"чтобы   найти по дате     нажмите   2"<<endl;
    cout <<"Что бы выйти из программы нажмите 3"<<endl;
    cin >> input;
 
        switch( input ){
            case 1:
                cout<<"Введите для поиска ";
                getline(cin,nop[1]);
                getline(cin,nop[1]);
                for(int i =0;i<m.size;i++){
                if(m.model[i]==nop[1]|m.price[1]==nop[1]|m.weight[i]==nop[1])
                {   cout <<" Дело №"<<i<<endl;
                    cout<<endl;
                    cout << "название:" << m.model[i] << endl;
                    cout << "приоритет:" << m.price[i] << endl;
                    cout << "описание:" << m.weight[i] << endl;
                    cout <<"Дата :"<<m.power[i]<<"."<<m.mon[i]<<"."<<m.yer[i]<<endl;
                    cout<<"Время :"<<m.gearbox[i]<<":"<<m.min[i]<<endl;
                }
                
                }
                break;
            case 2:
               cout<<"Введите день , месяц , год . Вводите через enter :";
               cin >>dat;
               cin >>mes;
               cin >>god;
               cout <<"введите час и минуту . Вводите через enter:";
               
               cin >>chas;
               cin >>minut;
               for(int i=0;i<m.size;i++){
                if(m.power[i]==dat && m.mon[i]==mes && m.yer[i]==god && m.gearbox[i]==chas && m.min[i]==minut)
                {
                    cout <<" Дело №"<<i<<endl;
                     cout<<endl;
                    cout << "название:" << m.model[i] << endl;
                    cout << "приоритет:" << m.price[i] << endl;
                    cout << "описание:" << m.weight[i] << endl;
                    cout <<"Дата :"<<m.power[i]<<"."<<m.mon[i]<<"."<<m.yer[i]<<endl;
                    cout<<"Время :"<<m.gearbox[i]<<":"<<m.min[i]<<endl;
                }
              
                }

                break;
            case 3:
                cout << "Выход из программы... "<<endl;
                exit = true;
            break;
        }
    }while( !exit );
}

void ud(){
    cout<<endl;
    cout<<"Введите номер дела:"<<endl;
    int pos;
    cin>>pos;
    
    if (pos>=1&&pos<=m.size)
        {
            for (int i=pos;i<m.size-1;i++){
        m.model[i]=m.model[i+1];
        m.price[i]=m.price[i+1];
        m.weight[i]=m.weight[i+1];
        m.power[i]=m.power[i+1];
        m.gearbox[i]=m.gearbox[i+1];
        m.mon[i]=m.mon[i+1];
        m.min[i]=m.min[i+1];
        m.yer[i]=m.yer[i+1];
            }
            m.size--;
        }
        
    
    
   
    
}
void redakt(){
    cout<<endl;
    string p;
    cout<<"Введите название, описание, приоритет дела для редактирования всего дела:";
    cin>>p;
    
    for (int i=0;i<m.size;i++){
    if (m.model[i] == p|m.price[i]==p|m.weight[i]==p)
        {
        cout << "Внесите название:";
        getline(cin,m.model[i]);
        getline(cin,m.model[i]);
        cout << "Внесите приоритет:";
        getline(cin,m.price[i]);
        cout << "Внесите описание:";
        getline(cin,m.weight[i]);
        cout << "Внесите день:";
        cin>>m.power[i];
        cout<<"Внесите месяц:";
        cin>>m.mon[i];
        cout<<"Внесите год:";
        cin>>m.yer[i];
        cout << "Внесите час:";
        cin>>m.gearbox[i];
        cout<<"Внесите минуты:";
        cin>>m.min[i];
        cout<<endl;
        }
     if(m.power[i]>31 | m.mon[i]>12 | m.yer[i]>3000 | m.gearbox[i]>23| m.min[i]>59)
        {
            cout<<"Не правильно ввели дату или время."<<endl;
            break;
        }
    }
}
void vivodd(){
      int input;
    bool exit = false;
    
    do{
            cout<<"Что бы вывести по   дням  нажмите 1:";
            cout<<"Что бы вывести по месяцам нажмите 2:";
            cout<<"Что бы вывести по  годам  нажмите 3:";
            cout<<"чтобы   выйти    из    программы   нажмите   7"<<endl;
            cin >> input;
            int arr[m.size];
            switch( input ){
            case 1:
                            for(int q=0;q<m.size;q++){
                      int arr[q]=m.power[q]*3600*24+m.mon[q]*3600*24*31+m.yer[q]*3600*24*31*12+m.gearbox[q]*3600+m.min[q]*60;
                }
                                        for (int i = 0; i < m.size - 1; i++) {
                        for (int j = 0; j < m.size - i - 1; j++) {
                            if (arr[j] > arr[j + 1]) {
                                // меняем элементы местами
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                        }
                    }
                            
            break;
          case 7:
            cout << "Выход из программы... "<<endl;
                exit = true;
            break;
        }
    }while( !exit );
}


void cort(){
     int input;
    bool exit = false;
    
    do{
            cout<<"Что бы вывести по   дням  нажмите 1:";
            cout<<"Что бы вывести по месяцам нажмите 2:";
            cout<<"Что бы вывести по  годам  нажмите 3:";
            cout<<"чтобы   выйти    из    программы   нажмите   7"<<endl;
            cin >> input;
            switch( input ){
            case 1:
            
            break;
          case 7:
            cout << "Выход из программы... "<<endl;
                exit = true;
            break;
        }
    }while( !exit );
}
int main()
{
    setlocale(0, "rus");
    
    
    int input;
    bool exit = false;
    do{
    cout<<"чтобы   добавить            дело   нажмите   1"<<endl;
    cout<<"чтобы   удалить             дело   нажмите   2"<<endl;
    cout<<"чтобы   редактировать       дело   нажмите   3"<<endl;
    cout<<"чтобы   найти               дело   нажмите   4"<<endl;
    cout<<"чтобы   вывести на экран    дело   нажмите   5"<<endl;
    cout<<"чтобы   увидеть дело по сортировке нажмите   6"<<endl;
    cout<<"чтобы   выйти    из    программы   нажмите   7"<<endl;
    cin >> input;
 
        switch( input ){
            case 1:
                add();
                break;
            case 2:
               ud();
                break;
            case 3:
            redakt();
                break;
            case 4:
            po();
            break;
            case 5:
             print ();
            break;
            case 6:
             cort ();
            break;
            case 7:
            cout << "Выход из программы... "<<endl;
                exit = true;
            break;
        }
    }while( !exit );
 
    return 0;
    }
