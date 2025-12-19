#include<iostream>
using namespace std;
int main(){
    char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';
    int turn=1;
    char sign;
    int run=1;
    while(run==1){
       cout<<"\n\n"<<endl;
       cout<<a<<"  |  "<<b<<"   |  "<<c<<endl;
       cout<<"--+---+---+---"<<endl;
       cout<<d<<"  |  "<<e<<"   |  "<<f<<endl;
       cout<<"--+---+---+---"<<endl;
       cout<<g<<"  |  "<<h<<"   |  "<<i<<endl;
        

        if(turn==1)
    
    {
        sign='x';
        cout<<"player1(x)"<<endl;
    }
    else{
        sign='o';
        cout<<"player2(o)"<<endl;
    }
    int position; 
    cin>>position;

    int move=0;
    
    if(a=='1'&&position==1){
        a=sign;
    }
        else if(b=='2'&&position==2){
            b=sign;
        }
        else if(c=='3'&&position==3){
            c=sign;
        }
        else if(d=='4'&&position==4){
            d=sign;
        }
        else if(e=='5'&&position==5){
            e=sign;
        }
        else if(f=='6'&&position==6){
            f=sign;
        }
        else if(g=='7'&&position==7){
            g=sign;
        }
        else if(h=='8'&&position==8){
            h=sign;
        }
        else if(i=='9'&&position==9){
            i=sign;
        }
        else{
            cout<<"wrong input"<<endl;
            move=0;
        }
        if(a==b&&b==c||d==e&&e==f||g==h&&h==i||a==d&&d==g||b==e&&e==h||c==f&&f==i||a==e&&e==i||c==e&&e==g){
            cout<<"player"<<turn<<"match wins"<<endl;
            break;
            
        }
        else if(a!='1' && b!='2' && c!='3' &&
                d!='4' && e!='5' && f!='6' &&
                g!='7' && h!='8' && i!='9'){
            cout<<"match draw"<<endl;
            run=0;
        }
        if(turn==1){
            turn=2;
        }
        else{
            turn=1;
        }
        
    } 
        return 0;

        
}    
