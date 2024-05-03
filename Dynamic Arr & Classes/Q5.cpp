#include<iostream>
using namespace std;

void personAConversation(char tokenz[][101],int rows)
{
    int rowsOfA=0;
    int count=0;
    for(int i=0;i<rows;i++)
    {
        if(tokenz[i][0]=='A')
        {
            rowsOfA++;
        }
    }
    char **ptr=new char*[rowsOfA];
    int k=0;
    for(int i=0;i<rows;i++)
    {
        if(tokenz[i][0]=='A')
        {
            for(int j=1;j!='/0';j++)
            {
                if(tokenz[i][j]!=' ')
                {
                    count++;
                }
            }
            *(ptr+k)=new char[count+1];
        }
    }
    for(int i=0;i<rows;i++)
    {
        if(tokenz[i][0]=='A')
        {
            for(int j=1;j!='/0';j++)
            {
                if(tokenz[i][j]!=' ')
                {
                   
                }
            }
            *(ptr+k)=new char[count+1];
        }
    }
    
}

int main() {
    char user;
    char sentence[101];
    char tokenz[101][101];
    int count = 0;

    while (true) {
        cout << "Which User A/B (Enter 'E' to exit): ";
        cin >> user;
        if (user == 'E')
            break;

        cout << "Sentence for " << user << ": ";
        cin.ignore(); 
        cin.getline(sentence, 101);

        tokenz[count][0] = user;
        for (int i = 0; sentence[i] != '\0'; i++) {
            tokenz[count][i + 1] = sentence[i]; 
        }

        count++;
    }
    personAConversation(tokenz,count);
    // Display the stored values
    for (int i = 0; i < count; i++) {
        for (int j = 0; tokenz[i][j] != '\0'; j++) {
            cout << tokenz[i][j];
        }
        cout << endl;
    }

    return 0;
}
