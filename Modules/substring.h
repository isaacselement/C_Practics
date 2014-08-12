// Find the last index of substr in mainstr.

int findstr(char* substr, char* mainstr)
{
    int index = -1;

    for(int i = 0; *(mainstr+i)!='\0';i++)
    {
        for(int j = 0; *(substr+j)!='\0';j++)
        {
            if(*(substr+j) != *(mainstr+i+j))
            {
                break;
            }
            if(*(substr+j+1)=='\0')
            {
                index = i;
            }
        }
    }   

    return index;
}


