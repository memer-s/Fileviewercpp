#include <iostream>
#include <fstream>

/*
{
    std::fstream file("bruhhh.memer");
    std::string readstring;

    char

    while (std::getline(file, readstring))
    {
        std::cout << readstring;
    }
    
    file.close();


    unsigned char testchar = 254;
    std::string teststring = "Hello world";
    for (int i = 0; i < teststring.length(); i++)
    {
        std::cout << teststring[i] << " ";
    }
*/

int main(int argc, char* argv[]) 
{
    if (argv[1]!="help")
    {
        std::fstream file(argv[1]);
        std::cout << "Reading file: " << argv[1] << std::endl << std::endl;
        std::string readstring;
        std::string readstringtmp;
        std::string filename;
        filename = argv[1];
        std::cout << "  +";
        for (int i = 0; i < 100; i++){std::cout << "-";}
        std::cout << "+\n  |";

        std::cout << "  " << filename;
        for (int i = 0; i < 100-filename.length()-3; i++)
        {
            std::cout << " ";
        }
        std::cout << " |\n  | ";

        while(std::getline(file, readstringtmp)) 
        {
            readstring = readstring + readstringtmp;
        }

        for (int line = 0; line < (readstring.length()/100)+1; line++)
        {
            for (int i = 0; i < 98; i++)
            {
                std::cout << readstring[i+(line*98)];
            }
            
            if (readstring.length()<100)
            {
                for (int i = 0; i < 100-readstring.length()-1; i++)
                {
                    std::cout << " ";
                }
                std::cout << " |";
            }
            else {
                std::cout << " |";
            }
            std::cout << "\n  | ";
        }
        

        
        for (int i = 0; i < 99; i++){std::cout << " ";}
        std::cout << "|\n  +";
        for (int i = 0; i < 100; i++){std::cout << "-";}
        std::cout << "+\n";

        

        file.close();
    }

    else {
        std::cout << "An extremely simple program for viewing ascii text files.";
    }
    

    return 0;
}