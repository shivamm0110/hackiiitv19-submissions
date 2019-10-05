#include<iostream.h>
#include<conio.h>

static int no=1;

class booth{
    private:
        int f_id;
        float wt;
        int grade;
    public:
        void in(){
            cout<<"Enter farmer id: ";
            cin>>f_id;
            cout<<"Enter weight of crop";
            cin>>wt;
            cout<<"Enter its quality";
            cin>>grade;
        }
        void out(){

            no++;
        }

}

class consumer{

}
void main(){
    booth  b;
}
