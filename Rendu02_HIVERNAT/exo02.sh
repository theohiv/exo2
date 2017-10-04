cd src
echo "Number of songs :";grep -c "Track ID" library.xml
echo "Nombre de music de Manu Chao";grep -wc RARE library.xml
touch output
cp | grep -w .mp3 library.xml >> output
sed -i -e 's/^..............................//' >>output
rm output-e
mv output ..
cd ..
touch output.txt
< output tr -s ' ' | tr -d '|/=<>string' >> output.txt
rm output


