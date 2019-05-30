#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int space;
    string str = "\n";
    while(getline(cin, str))
    {
        space = 0;
        str=str.insert(str.size(), " ");
        for( int i = 0 ; i < str.size() ; i++){
            if(str[i] == ' ')
                space++;
        }
        int num = 0, count = 0, tmp = 0, data[space] = {0};
        stringstream ss;
        for( int i = 0 ; i < space ; i++){
            ss.clear();
            ss << str;
            ss >> data[i];
        }
        for( int i = 0 ; i < space ; i++){
            for( int j = 0 ; j < space ; j++){
                if(data[i] == data[j])
                    tmp++;
            }
            if(tmp > space/2 ){
                cout << data[i] << endl;
                count = 1;
                break;
            }
            tmp = 0;

        }
        if(count == 0)
        {
            cout << "NO" << endl;
            count = 0;
        }
    }
}

/*public static void main(String[] args) {
  Scanner scan= new Scanner(System.in);
  int count=0,check=0;
  int i,j;
  while(true) {
   count=0;
   String[] cmds=scan.nextLine().split(" ");
   for(i=0;i<cmds.length;i++) {
    for(j=0;j<cmds.length;j++) {
     if(cmds[i].equals(cmds[j])) {
      count++;
     }
    }
    if(count>(cmds.length/2)) {
     System.out.println(cmds[i]);
     check=1;
     break;
    }
    else count=0;
   }
   
   if(check!=1)System.out.println("NO");
   check=0;
  }

 }

}*/
