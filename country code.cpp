import csv
f=open('data_csv','r')
reader=csv.reader(f)
d={}
for i in reader:
  d[i[0]]=i[1]
countryname=[]
for i in d:
  countryname.append(i)
x=sorted(countryname) 
country_code1=str(input())
country_code2=str(input())
c1=x.index(country_code1)
c2=x.index(country_code2)
for i in range((c1+1),c2):
  print(x[i])