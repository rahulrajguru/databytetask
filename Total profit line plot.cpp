import matplotlib.pyplot as plt
data=[211000,183300,224700,222700,209600,201400,295500,361400,234000,266700,412800,300200]
month=[1,2,3,4,5,6,7,8,9,10,11,12]
#for any other data set s
#for i in range(0,2):
  #x=int(input())
  #data.append(x)
plt.plot(month,data)
#plt.axis([0,12,0,412800])
plt.title("Data Byte task")
plt.xlabel("Month")
plt.ylabel("Total Profit")
plt.show() 