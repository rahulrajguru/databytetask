import matplotlib.pyplot as plt
facecream=[2500,2630,2140,3400,3600,2760,2980,3700,3540,1990,2340,2900]
facewash=[1500,1200,1340,1130,1740,1555,1120,1400,1780,1890,2100,1760]
toothpaste=[5200,5100,4550,5870,4560,4890,4780,5860,6100,8300,7300,7400]
bathingsoap=[9200,6100,9550,8870,7760,7460,8980,9960,8100,10300,13300,14400]
shampoo=[1200,2100,3550,1870,1560,1890,1780,2860,2100,2300,2400,1800]
moisturizer=[1500,1200,1340,1130,1740,1555,1120,1400,1780,1890,2100,1760]
n=["facecream","facewash","toothpaste","bathingsoap","shampoo","moisturizer"]
facecream_sales = sum(facecream)
facewash_sales=sum(facewash)
toothpaste_sales=sum(toothpaste)
bathingsoap_sales=sum(bathingsoap)
shampoo__sales=sum(shampoo)
moisturizer_sales=sum(moisturizer)
a=[facecream_sales,facewash_sales,toothpaste_sales,bathingsoap_sales,shampoo__sales,moisturizer_sales]
plt.pie(a,labels=n)  
plt.title("Data Byte task")
plt.show()