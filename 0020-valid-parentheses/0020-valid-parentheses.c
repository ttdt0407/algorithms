
bool compare(char a, char b)
{
    return a == b;
}

bool isValid(char* s) {

    int arr_size = strlen(s);

    char A[arr_size];
    int top_idx = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            A[++top_idx] = s[i];
        }
        else if (top_idx >= 0)
        {   
            if (s[i] == ')')
            {
                if (compare('(', A[top_idx--]) == false)
                    return false;
            }
            else if (s[i] == '}')
            {
                if (compare('{', A[top_idx--]) == false)
                    return false;
            }
            else
            {
                if (compare('[', A[top_idx--]) == false)
                    return false;
            }
        }
        else
        {
            return false;
        }
    }

    return (top_idx == -1) ? true : false;
}