#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

class booth{
    private:
        int f_id;
        float wt;
        int grade;
        float price=0;
    public:
        void in(){
            cout<<"Enter farmer id: ";
            cin>>f_id;
            cout<<"Enter weight of crop: ";
            cin>>wt;
            cout<<"Enter its quality(between 1-3): ";
            cin>>grade;
        }
        void process(){
            switch(grade){
                    case 1: price=wt*1/3*100;
                            break;
                    case 2: price=wt*2/3*100;
                            break;
                    case 3: price=wt*100;
                            break;
                    default:cout<<"wrong input of quality ";
                            break;
            }

        }
        void out(){
            char a;
            while(1){
                system("cls");
                cout<<"Do you want to enter data(Y/N): ";
                cin>>a;
                if(a=='y'||a=='Y')
                {
                    in();
                    process();
                    ofstream fout;
                    fout.open("data.txt");
                    fout<<f_id;
                    fout<<wt;
                    fout<<price<<endl;
                    fout.close();
                }
                else if(a=='n'||a=='N')
                    exit(1);
                else
                    cout<<"Wrong input, try again";
            }
        }

};
int main(){
    booth  b;
    b.out();
    return 0;
}
