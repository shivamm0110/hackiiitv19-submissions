#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;
static int no=1;

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

            no++;
        }

};

class consumer{

};
int main(){
    booth  b;
    b.in();
    return 0;
}
