#include <iostream>
using namespace std;

int main() 
{
  for(int a = 0;a < 50; a+=10){
    cout << a << endl;
  }
}

int main()
{
  int a = 42;
  do{
    cout << a << endl;
    a++;
  }while(a>0);
}

int main()
{
  int age = 15;
  switch(age){
    case 16:
      cout << "Too young";
      break;
    case 42:
      cout << "Adult";
      break;
    case 70:
      cout << "Senior";
      break;
    default:
      cout << "This is the default case.";
   }
   return 0;
}

int main()
{
  int age = 20;
  if(age > 16 && age < 60){
    cout << "Accepted!" << endl;
  }
}

int main()
{
  int age = 16;
  int score = 90;
  if(age > 20|| score > 50){
    cout << "Accepted!" << endl;
  }
}

int main()
{
  int age = 17;
  if(!(age > 16)){
    cout << "Your age is less than 16" << endl;
  }
}

int main()
{
  int a = 42;
  do{
    cout << a << endl;
    a++;
  }while(a>);
}

int main()
{
  int x = 10;
  x += 4;
  x -= 5;
  return 0;
}

int main()
{
    int num = 1;
    while (num < 6) {
        cout << "Number: " << num << endl;
        num = num + 3;
    }

    return 0;
}
*/
int main()
{
    int b[] = {11, 45, 62, 70, 88};
    cout << b[0] << endl;    
    cout<< b[3] << endl;
    return 0;
}