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
        float c_wt;

    public:
        int ffun(){
            return f_id;
        }
        float gfun(){
            return grade;
        }
        void out(){
            cout<<"farmer ID "<<f_id <<endl;
            printf("Weight of crop in Quintal%.2f\n",wt);
            cout<<"Quality of crop: "<<grade<<endl;
           // printf("%.2f\n",price);
        }
        void process(){
                cout << "Please enter the distance from booth in KM ";
                cin>>dis;
                cout<<endl << "Enter crop amount required in Quintal";
                cin>>c_wt;
                if(wt>=c_wt){
                    if(dis<=500)
                        c_price=price+2400+(dis*c_wt*5);
                    else
                        c_price=price+2400+(dis*c_wt*3);
                cout<<"Price to be paid: "<<c_price<<endl<<endl;
                }
                else{
                    cout<< "Insufficient stock";
                }
                system("pause");


        }

};
int main(){
        int x,f;
        float g;
        while(1){
            ifstream fin("data.dat",ios::in);
            system("cls");
            cout<<"1> Display whole list: \n2>Search by farmer ID:\n3>Search by Grade:\n4>Exit \n\nEnter the option number you want to execute: ";
            cin>>x;
            switch(x){
                case(1):
                        while(fin){
                            consumer c;
                            fin.read((char*)&c,sizeof(c));
                            c.out();
                            c.process();
                        }
                        break;
                case(2):cout<<"Enter farmer id to be searched: ";
                        cin>>f;
                         while(fin){
                            consumer c;
                            fin.read((char*)&c,sizeof(c));

                            if(c.ffun()==f){
                                c.out();
                                c.process();
                            }
                        }
                        break;
                case(3):cout<<"Enter quality grade to be searched: ";
                        cin>>g;
                         while(fin){
                            consumer c;
                            fin.read((char*)&c,sizeof(c));
                            if(c.gfun()==g){
                                c.out();
                                c.process();
                            }
                        }
                        break;
                case(4):cout<<"Exiting... ";
                        exit(1);
                        break;
                default:cout<<"Wrong input ";
                        break;
                }
            fin.close();
            }


return 0;
}
