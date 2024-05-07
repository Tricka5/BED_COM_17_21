int main() {
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    box1.SEtLength(6.0);
    box1.SetBredth(7.0);
    box1.Setheight(5.0);

    box2.SetLength(12.0);
    Box2.SetBredth(13.0);
    Box3.SetHeight(10.0);

    volume = Box1.GetVolume();
    cout<< "volume of Box1 : "<< volume<<endl;

    box3 = Box1 + Box2;

    volume = Box3.GetVolume();
    cout << "Volume of Box3 : " <<volume<<endl;

    return 0;
}