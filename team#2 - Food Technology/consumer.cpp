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
        float dis,c_price;

    public:
        void out(){
            cout<<f_id <<endl;
            printf("%.2f\n",wt);
            cout<<grade<<endl;
            printf("%.2f\n",price);
        }
        void process(){
                cout << "Please enter the distance from booth in KM ";
                cin>>dis;
                if(dis<=500)
                    c_price=price+2400+(dis*wt*5);
                else
                    c_price=price+2400+(dis*wt*3);
                cout<<c_price;

        }

};
int main(){
        ifstream fin("data.dat",ios::in);
            while(fin){
                consumer c;
                fin.read((char*)&c,sizeof(c));
                c.out();
                c.process();
            }
            fin.close();
    return 0;
}
