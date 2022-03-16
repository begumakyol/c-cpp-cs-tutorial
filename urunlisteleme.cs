using System;

class Program
{
    //önce class oluşturdum.
    class Urun
    {
        public string Adi { get; set; }
        public int Bedeni { get; set; }
        public string Rengi { get; set; }
    }

    public static void Main(string[] args)
    {
        //Ürünleri classlarda tanıttım.
        Urun urun1 = new Urun();
        urun1.Adi = "Etek";
        urun1.Bedeni = 42;
        urun1.Rengi = "pembe";

        Urun urun2 = new Urun();
        urun2.Adi = "T-shirt";
        urun2.Bedeni = 38;
        urun2.Rengi = "mor";

        Urun urun3 = new Urun();
        urun3.Adi = "Gömlek";
        urun3.Bedeni = 44;
        urun3.Rengi = "sarı";

        //urun adında yeni bir dizi oluşturdum.
        Urun[] urunler = new Urun[] { urun1, urun2, urun3 };

        //yazdırması için foreach kullandım.
        foreach (var Urun in urunler)
        {
            Console.WriteLine(Urun.Adi + " : " + Urun.Bedeni + " : " + Urun.Rengi);
        }

        Console.WriteLine("Foreach Döngüsü Bitti\n");

        //yazdırması için for kullandım.
        for (int i = 0; i < urunler.Length; i++)
        {
            Console.WriteLine(urunler[i].Adi + " : " + urunler[i].Bedeni + " : " + urunler[i].Rengi);
        }

        Console.WriteLine("For Döngüsü Bitti\n");

        //önce bir değişken tanımladım ve yazdırması için while kullandım.
        int j = 0;
        while (urunler.Length > j)
        {
            Console.WriteLine(urunler[j].Adi + " : " + urunler[j].Bedeni + " : " + urunler[j].Rengi);
            j++;

        }

        Console.WriteLine("While Döngüsü Bitti\n");
    }

}