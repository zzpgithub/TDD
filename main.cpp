#include "iostream"
#include "string"

using namespace std;

void Translate(string &input, string &output)
{
	output = "";
	int count = 0;
	for(int i=0; i<input.length(); i++)
	{
		char temp = input.at(i);
		if('a' == temp || 'e' == temp ||'i' == temp ||'o' == temp ||'u' == temp)
			count++;
	}
	if((float)count/input.length()>0.33){
	bool isVowel = true;
	for(int i=0; i<input.length(); i++)
	{
		char temp = input.at(i);
		if(('a' == temp || 'e' == temp ||'i' == temp ||'o' == temp ||'u' == temp)&&isVowel==true)
		{
			isVowel = false;
			output += "mommy";
		}
		else if(!('a' == temp || 'e' == temp ||'i' == temp ||'o' == temp ||'u' == temp))
		{
			isVowel = true;
			output += input.at(i);
		}
	}
	}
	else output = input;
}

int main()
{
	string output;

	//Test
	string aecd = "aecd";
	Translate(aecd,output);
	if (output == "mommycd")
		cout<<"pass"<<endl;
    output="";

	//Test
	string adfgkj = "adfgkj";
	Translate(adfgkj,output);
	if (output == "adfgkj") 	
		cout<<"pass"<<endl;
	output="";

	//Test
	string hmm = "hmm";
	Translate(hmm,output);	
	if (output == "hmm") 	
		cout<<"pass"<<endl;
	output=""; 

	//Test
	string she = "she";
	Translate(she,output);  
	if (output == "shmommy") 	
		cout<<"pass"<<endl;
	output="";

	//Test
	string hear = "hear";
	Translate(hear,output);
	if (output == "hmommyr") 	
		cout<<"pass"<<endl;
	output="";

	//Test
	string aaaau = "aaaau";
	Translate(aaaau,output);   
	if (output == "mommy") 	
		cout<<"pass"<<endl;
	output="";
	return 0;
}