/*������Person,������Ա������name���Ա�sex������age��Ҫ������string���Ͷ����ַ�����Ϣ��
�����й��캯�����������������õĳ�Ա������
�̳�Person�࣬������������Teacher,���������������ݳ�Ա�У�
����no����нsalary�����������ĳ�Ա��������ع��ܺ�����Ҫ���������������������С�*/ 
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
 cout<<"�������1λ��ʦ�Ĺ��š��������Ա��������н\n";
 cin>>t1;
 cout<<"�������2λ��ʦ�Ĺ��š��������Ա��������н\n";
 cin>>t2;
 if(t1>t2)
	 cout<<"��1λ��ʦ��н��"<<endl;
   else 
      cout<<"��2λ��ʦ��н��"<<endl;
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
 cout<<"�������1λ��ʦ�Ĺ��š��������Ա��������н\n";
 cin>>t1;
 cout<<"�������2λ��ʦ�Ĺ��š��������Ա��������н\n";
 cin>>t2;
 if(t1>t2)
	 cout<<"��1λ��ʦ��н��"<<endl;
   else 
      cout<<"��2λ��ʦ��н��"<<endl;
 return 0;    
}
