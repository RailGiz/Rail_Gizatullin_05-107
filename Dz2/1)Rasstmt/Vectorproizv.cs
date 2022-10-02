public static class Vectorproizv
{
    public static double Coord1(Point3D p1, Point3D p2)
    {
        return ((p1.Y * p2.Z) - (p1.Z * p2.Y));
    }
    public static double Coord2(Point3D p1, Point3D p2)
    {
        return ((p1.Z * p2.X) - (p1.X * p2.Z));
    }
    public static double Coord3(Point3D p1, Point3D p2)
    {
        return ((p1.X * p2.Y) - (p1.Y * p2.X));
    }

}
