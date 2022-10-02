public static class GeomertyMath
{
    public static double Distance(Point3D p1, Point3D p2)
    {
        return Math.Sqrt((p1.X - p2.X) * (p1.X - p2.X) + (p1.Y - p2.Y) * (p1.Y - p2.Y) + (p1.Z - p2.Z) * (p1.Z - p2.Z));
    }

    public static double Distanceto0(Point3D p1, Point3D p2)
    {
       return Math.Sqrt(Math.Pow(0 - p1.X, 2) + Math.Pow(0 - p1.Y, 2) + Math.Pow(0 - p1.Z, 2));
    }
}
