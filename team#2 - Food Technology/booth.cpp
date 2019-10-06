#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

class booth{
    private:
        int f_id;
        float wt;
        float grade;
        float price;
    public:
        void in(){
            cout<<"Enter farmer id: ";
            cin>>f_id;
            cout<<"Enter weight in quintal of crop: ";
            cin>>wt;
            cout<<"Enter its quality(between 1-3): ";
            cin>>grade;
        }
        void process(){
            int x=grade;
            switch(x){
                    case 1: price=wt*3/5*100;
                            break;
                    case 2: price=wt*4/5*100;
                            break;
                    case 3: price=wt*100;
                            break;
                    default:cout<<"wrong input of quality ";
                            break;

            }
            cout<<"Payment to farmer: "<<price;

        }

};
int main(){
        char a;
            while(1){
                system("cls");
                cout<<"Do you want to enter data(Y/N): ";
                cin>>a;
                if(a=='y'||a=='Y')
                {
                    booth  b;
                    b.in();
                    b.process();
                    ofstream fout;
                    fout.open("data.dat",ios::out|ios::binary|ios::app);
                    fout.write((char*)&b, sizeof (b));
                    fout.close();
                }
                else if(a=='n'||a=='N')
                    exit(1);
                else
                    cout<<"Wrong input, try again";
                    system("pause");
            }
    return 0;
}
