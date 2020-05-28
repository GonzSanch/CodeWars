int basic_op(char op, int value1, int value2)
{
    if (op == '+')
        return (value1 + value2);
    if (op == '-')
        return (value1 - value2);
    if (op == '*')
        return (value1 * value2);
    if (op == '/')
        return (value1 / value2);
    return (0);
}
