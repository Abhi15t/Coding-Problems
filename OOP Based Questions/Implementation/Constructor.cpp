#include<bits/stdc++.h>

using namespace std;

class employee{
public:
  int salary,emp_id;

  employee(){
    cout<<"This default constructor";
  }
  employee(int salary, int emp_id){
    this->salary=salary;
    cout<<salary;
    this->emp_id=emp_id;
    cout<<emp_id;
    cout<<"This paramaterized constructor";
  }
  employee(employee &sample){
    salary=sample.salary;
    emp_id=sample.emp_id;
  }
  int annual_salary(){
    return salary*12;
  }

};

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

    employee s1;
    cout<<"\n";
    employee s2(200, 234);
    cout<<"\n";
    employee s3=s2;
    cout<<s3.salary;
    cout<<s3.emp_id;

 return 0;
}
