#include <iostream>

using namespace std;

class Pyramid
{
    int height;
    
    public:
    void get_height()
    {
        cout << "Enter the height of pyrmamid: ";
        cin >> height;
    }
    
    friend void printPyramid(Pyramid p1)
    {
        int h = p1.height;
        
        for (int i = 0; i < h; i++)
        {
            for (int j = h-1-i; j > 0; j--)
            {
                cout << "  ";
            }
            for (int j = 65; j < 65+i; j++)
            {
                printf("%c ", j);
            }
            for (int j = 65 + i; j >= 65; j--)
            {
                printf("%c ", j);
            }
            printf("\n");
        }
    }
};

int main()
{
    Pyramid Giza;
    
    Giza.get_height();
    
    printPyramid(Giza);
}