bool isValid(char* s) {
    int n = strlen(s);
    int stack[n];
    int top = -1;

    for (int i = 0; i<n; i++){
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){  // for opening brackets
            stack[++top] = s[i];
        }
        else{   // for closing brackets
            if (top == -1){   // check for invalid string
                return false;
            }
            // checking matching characters
            if (stack[top] == '(' && s[i] == ')' || stack[top] == '{' && s[i] == '}' ||stack[top] == '[' && s[i] == ']' ){
                top--;
            }
            else{  // if match not found then return false
                return false;
            }
        }
    }
    return top == -1;
}
