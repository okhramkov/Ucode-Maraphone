int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2)
{
    int count = mx_strlen(s1) - 1;
    int i = 0;
    int count_const = count;
    while (i <= count_const)
    {
        s1[count + 1] = s2[i];
        i++;
        count++;
    }
    s1[count + 1] = '\0';
    return s1;
}
