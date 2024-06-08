class triangle
{
public:
    double hipot, catetoAdjac, catetoOposto, altura;
    double areaCalc()
    {
        return (hipot * altura) / 2;
    }
    double perimetroCalc()
    {
        return hipot + catetoAdjac + catetoOposto;
    }
};
