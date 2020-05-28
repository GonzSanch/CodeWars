unsigned rental_car_cost(unsigned d)
{
    unsigned rent;
    rent = d * 40;
    if (d >= 7)
        rent -= 50;
    else if (d >= 3)
        rent -= 20;
    return rent;
}
