int ft_str_is_uppercase(char *str) 
{
    if (*str == '\0') 
    {
        return 1;
    }

    while (*str != '\0') 
    {
        if (!(*str >= 'A' || *str <= 'Z')) // (!(*str >= 65 || *str <= 90)) 
        {
            return 0;
        }
        str++;
    }
    return 1;
}