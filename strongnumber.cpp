
#include <stdio.h>
int main()
{
    int n, i;
    int fact, ram;
    printf("Enter a number : ");
    scanf("%d", &n);

    int sum = 0;int temp = n;
    
    while (n != 0)
    {
        i = 1, fact = 1;
        ram = n % 10;
        while (i <= ram)
        {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (sum == temp)
        printf("%d strong number", temp);
    else
        printf("%d  not a strong number", temp);
    return 0;
}
// #include<stdio.h>
// int main(){
//     int n,sum=0,i,ram,r,fact=1;
//     printf("enter the number");
//     scanf("%d",&n);
//     while(r!=0){
        
//      r=n%10;

//     // r=n%10;
    
//     for(i=1;i<=r;i++){

//     ram=fact*=i;
// sum+=ram;
//      r= n/=10;
//     }
// //   r= n/10;
//     }
//     // sum=sum+ram;
// if(sum==n){
//     printf("%d is the strong number",n);
// }
// else{
//     printf("  not strong number ");
// }
//     // printf("%d is the strong number",ram);

// }
#include <iostream>
using namespace std;

int main() {
  int num, sum = 0, ram, fact;

  cout << "Enter a number: ";
  cin >> num;

  int temp = num;
  while (temp > 0) {
    ram = temp % 10;
    fact = 1;
    for (int i = 1; i <= ram; i++) {
      fact *= i;
    }
    sum += fact;
    temp /= 10;
  }

  if (sum == num) {
    cout << num << " strong number." << endl;
  } else {
    cout << num << "  not a strong number." << endl;
  }

  return 0;
}