#include <iostream>
#include <string>
using namespace std;

string ReadText() 
{
	//This function is to read text.
	string Text;

	cout << "Please enter a text: " << endl;
	getline(cin, Text);  /*we used the getline function because maybe the user will enter
	more than one word so he/she should make space between the words.*/

	return Text;
}

string EncryptText(string Text, short EncryptionKey) 
{
	//This function is to Encrypt The entered text.
	//and we did that by increasing each letter in the entered text by the encryptionkey = 2.
	//Then we retuned the entered text because we will use aging to decrypt the text.

	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}

	return Text;
}
string DecryptText(string Text, short EncryptionKey) 
{
	//This function is to decrypt the encrypted text and we did that by decreasing each letter of the encrypted text by encryprionkey = 2.
	//so the encrypted text will be in the original format.
	//for example : Soufiane will be Uqwhkcpg then Soufiane.

	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}

	return Text;
}

int main() 
{
	const short EncryptionKey = 2;

	string Text = ReadText(); //We read the text be make it equals the function 'ReadText' then will send it as parameter to the other function that we call it in.

	string TextAfterEncryption = EncryptText(Text, EncryptionKey); /*We define the variable 'TextAfterEncryption' and make it equals the function 'Encryption',
	so we can call the variable easilly a lot of times better than call the function.*/

	string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey); /*We define the variable 'TextAfterDecryption' and make it
	equals the function 'Decryption' ,so we can call the variable easilly a lot of times better than call the function.*/

	cout << "Text Before Encryption: " << Text << endl;
	cout << "Text After Encryption: " << TextAfterEncryption << endl;
	cout << "Text after Decryption: " << TextAfterDecryption << endl;

	return 0;
}