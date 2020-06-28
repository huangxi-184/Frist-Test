/*创建类Person,描述人员的姓名name、性别sex和年龄age，要求运用string类型定义字符串信息，
类中有构造函数、析构函数及常用的成员函数；
继承Person类，公有派生出类Teacher,派生类中新增数据成员有：
工号no、月薪salary，设计派生类的成员函数及相关功能函数，要求满足下列主函数的运行。*/ 
/*#include<iostream>
#include<string>
using namespace std;
class Person
{
    protected:
    string name;
    char sex;
    int age;
    public:
    Person(string nam="\0",char s=0,int a=0)
    {
        name=nam;
        sex=s;
        age=a;
    }
    ~Person(){}
};
class Teacher:public Person
{
    int no;
    float salary;
    public:
    Teacher(string nam="\0",char s=0,int a=0,int n1=0,float sa=0):Person(nam,s,a)
    {no=n1;salary=sa;}
    friend istream&operator>>(istream &,Teacher &);
    friend ostream&operator<<(ostream &,Teacher &);
	friend bool operator>(Teacher &a,Teacher &b);
    ~Teacher(){}
};
istream&operator>>(istream &is,Teacher &t)
{
    is>>t.name>>t.sex>>t.age>>t.no>>t.salary;
    return is;
}
bool operator>(Teacher &a,Teacher &b)
{
	if(a.salary>b.salary)
	return true;
	else
	return false;
}
int main()
{
 Teacher  t1,t2;
 cout<<"请输入第1位教师的工号、姓名、性别、年龄和月薪\n";
 cin>>t1;
 cout<<"请输入第2位教师的工号、姓名、性别、年龄和月薪\n";
 cin>>t2;
 if(t1>t2)
	 cout<<"第1位教师月薪高"<<endl;
   else 
      cout<<"第2位教师月薪高"<<endl;
 return 0;    
}*/
#include<iostream>
using namespace std;
#include<string>
class Person
{
	protected:
		string name;
		char sex;
		int age;
	public:
		Person()
		{
		}
		Person(string n,char s,int a)
		{
			name=n;
			sex=s;
			age=a;
		}
		~Person()
		{
			
		}
};
class Teacher:public Person
{
	protected:
		string no;
		float salary;
	public:
		Teacher()
		{
		}
		Teacher(string n,char s,int a,string m,float y):Person(n,s,a)
		{
			no=m;
			salary=y;
		}
	friend istream & operator>>(istream &in,Teacher &a);
	friend bool operator>(Teacher &a,Teacher &b);
};
istream & operator>>(istream &in,Teacher &a)
{
	in>>a.name>>a.age>>a.sex>>a.no>>a.salary;
	return in; 
}
bool operator>(Teacher &a,Teacher &b)
{
	if(a.salary>b.salary)
	return true;
	else
	return false;
}
int main()
{
 Teacher  t1,t2;
 cout<<"请输入第1位教师的工号、姓名、性别、年龄和月薪\n";
 cin>>t1;
 cout<<"请输入第2位教师的工号、姓名、性别、年龄和月薪\n";
 cin>>t2;
 if(t1>t2)
	 cout<<"第1位教师月薪高"<<endl;
   else 
      cout<<"第2位教师月薪高"<<endl;
 return 0;    
}
