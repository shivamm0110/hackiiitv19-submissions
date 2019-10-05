#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

class consumer{
    private:
        int f_id;
        float wt;
        float grade;
        float price;
    public:
        void out(){
            cout<<f_id <<endl;
            printf("%.2f\n",wt);
            cout<<grade<<endl;
            printf("%.2f\n",price);
        }
        void process(){


        }

};
int main(){
    consumer c;
    ifstream fin("data.dat",ios::in);
          //  while(!fin.eof()){
                fin.read((char*)&c,sizeof(c));
                c.out();
          //  }
            fin.close();
    return 0;
}
