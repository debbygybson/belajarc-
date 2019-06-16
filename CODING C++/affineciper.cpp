    #include<iostream>

    #include<string.h>

    #include<stdlib.h>

    using namespace std;

    string encryptionMessage(string Msg)

    {

        string CTxt = "";

        int a = 3;

        int b = 6;

        for (int i = 0; i < Msg.length(); i++)

        {

        if(Msg[i] <=90)
            {
            CTxt = CTxt + (char) ((((a * Msg[i]) + b) % 26) + 65);
            }
        else if(Msg[i]<=122)
            {
             CTxt = CTxt + (char) ((((a * Msg[i]) + b) % 26) + 91);
            }
        }

        return CTxt;

    }



    string decryptionMessage(string CTxt)

    {

        string Msg = "";

        int a = 3;

        int b = 6;

        int a_inv = 0;

        int flag = 0;

        for (int i = 0; i < 26; i++)

        {

            flag = (a * i) % 26;

            if (flag == 1)

            {

                a_inv = i;

            }

        }

        for (int i = 0; i < CTxt.length(); i++)

        {
            if(CTxt[i] <=90)
                {
               Msg = Msg + (char) (((a_inv * ((CTxt[i] - b)) % 26)) + 65);
                }
           else if(CTxt[i]<=122)
               {
               Msg = Msg + (char) (((a_inv * ((CTxt[i] - b)) % 26)) + 91);
               }
        }

        return Msg;

    }

    int main(int argc, char **argv)

    {

        cout << "Enter the message: ";

        string message;

        cin >> message;

        cout << "Message is :" << message;

        cout << "\nEncrypted Message is : " << encryptionMessage(message);



        cout << "\nDecrypted Message is: " << decryptionMessage(

                encryptionMessage(message));

    }
