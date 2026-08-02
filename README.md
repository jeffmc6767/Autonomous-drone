Reminding myself I need a 35V 1000uF on the ESC
-


This is my fully autonomous drone project. 
-
The goal of this autonomous drone currently is to transport items up to 1kg in weight anywhere from 5km to 10km(but its unlikely because the battery would cost way too much like 300+) fully autonomously with no human input. 

It will use Ardupilot firmware and Inav to control it an tell it where to go before it takes off. 

How does it communicate?
-

It uses the DJI o4 air unit to communicate with the n3 goggles(I already own it) and includes the camera so you can actually see what the drone sees. I have this because it is illegal to actually make the drone fully autonomous because there has to be human intervention if something happens, or if theres a higher priority aircraft like a helicopter. 

Oh and I forgot I need to get a drone license to fly this because it will MOST LIKELY be over 250g... the battery is 600. 

How am I building it
- 

Im going to be 3d printing the entire frame, and small accessories using Petg-cf(frame) then TPU for vibration dampening and dowels and soft stuff to protect items.

Im going to have to solder a bunch of the stuff on the drone to connect different components together 

BOM
- 

1. SpeedyBee F405 V5 OX32 55A 30x30 Model Aircraft FC&ESC Stack: **$131**
- https://www.speedybee.com/speedybee-f405-v5-55a-stack/
2. M10 GPS - Holybro: **$44**
- https://holybro.com/products/m10-gps?srsltid=AfmBOooO4W2vENdGD5hr2i8ZOHnd5x41-2PEYt0Rop2oPsvz_6V8OtxM
3. 2807 Brushless motors 1300kv: **$14 x 4 = 56**
- https://store.uniteduav.com/products/hobbywing-rtf-2807-fpv-drone-brushless-motor-7-inch-drone-engine?variant=50972002025688
4. Zeee 6S Lipo Battery 4000mAh 22.2V (two pack): **$131**
- [https://www.amazon.ca/Zeee-Battery-Quadcopter-Helicopter-Airplane/dp/B09B9ZPT3M?ref_=ast_sto_dp](https://www.amazon.ca/gp/product/B09Z6B16CW/ref=sw_img_1?smid=&psc=1)
5. ~~Radiomaster XR1 Nano Receiver 2.4GHz 900MHz Dual-Band T Antenna ExpressLRS Receiver: **NO LONGER NEED**. Ive added the dji o4 air unit because I already own the fpv controler and goggles.
- https://www.aliexpress.com/item/1005008512696774.html?spm=a2g0o.productlist.main.3.69faVxmWVxmW8P&algo_pvid=ef1b9873-fcbb-4780-9722-fcfdd8578742&algo_exp_id=ef1b9873-fcbb-4780-9722-fcfdd8578742-2&pdp_ext_f=%7B%22order%22%3A%2249%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21CAD%2149.72%2127.41%21%21%2134.67%2119.11%21%4021030dcd17855134357162495e22d9%2112000045496075637%21sea%21CA%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3A83956b84%3Bm03_new_user%3A-29895%3BpisId%3A5000000210902374&curPageLogUid=NFLc7gSR7lIC&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008512696774%7C_p_origin_prod%3A~~
6. HQ Durable Prop 7X4.5 Bi-Blade: $5
- [https://www.amazon.ca/HQProp-Tri-Blade-Propellers-Cinelifter-Carbonate/dp/B0C8S81G8P/ref=sr_1_3?crid=15ILOHXTOG717&dib=eyJ2IjoiMSJ9.sXaG9ccBGxtF_UftlNiEd8pZTa1EkgCGwW9GzXnrFhVE3zznZFauOCdCrpjF011vPWSntdKmt1rOObb90Mt3woIIoYfLD0liKPxvu3Ji2jqkqeyvK57fn7Fmly5v3qbK83up0pJMq-O0vlEOmIC66CDFyRlR8CLNhMMBCuTLJM-AHE3duf-w0Tvwu1C4dP1t4MP5WGcgTiNc-vZhPFUf6rSeik3AOHwi_emUJNZydvBgQpFenO1lq8q3Ii-t2-NE5WEkiRLOwtwpL18rcdo4BZD9rGgD766eooLqW_GS-v8.8X0eaGsePaaBKG3qj4a4lI89AN3IwqcPQ2ktlhzvNj8&dib_tag=se&keywords=7x3.5x3+props&qid=1785514379&sprefix=7x3+5x3+prop%2Caps%2C179&sr=8-3](https://rotorvillage.ca/hq-durable-prop-7x4-5-bi-blade-2cw-2ccw/)
7. DJI o4 Air unit: $138
----

Not on the drone but still needed: 
1. PETG-cf filament
    - will need a Hardened Steel Nozzle 0.6mm for this **$13**
2. TPU filament
3. ToolkitRC M7 200W DC Balance Charger and discharger **$47**
- [https://www.amazon.ca/Battery-Charger-D300-Balance-Batteries/dp/B0DZSBVWF5/ref=sr_1_8?dib=eyJ2IjoiMSJ9.ITT4dTIw58_I2rUkOVaawv9tg4llCxTdaybOxVS9YAuB74Q3kP8ZucL1DCXA-IDqnLh73cQJL2YgYNTIkkU-8Z-fuw7045JLndTLmEACm3j_P1AAkG2j7F-prBaDKdp6P3y7UiBwX8w0pot5EyMPqnznajI6Rf8MDizMlE7b_lZOvYD2lEjf9q9i6gG-cJKZvMhg56Emd6GN6NCSw1EZ7hLicmPYBg9RPfigehXVZjelPiuW-mgKcdMhYe3F4Nyg_J1zbP6z_WZv43qlksrpyTzCP0DNWrMUXKcm2wj85eA.-3fILOjtnyunjTQDIPzUBjW0ABDlsulul6EiIcXC2pY&dib_tag=se&keywords=6S+LiPo+charger&qid=1785514001&refinements=p_36%3A11500-&rnid=12035759011&sr=8-8](https://www.aliexpress.com/item/1005006041923883.html?spm=a2g0o.productlist.main.8.524a431bHRoLKy&aem_p4p_detail=20260731122113195671497748080000103304&algo_pvid=80542c8e-f59f-4306-baef-32c322c504c8&algo_exp_id=80542c8e-f59f-4306-baef-32c322c504c8-7&pdp_ext_f=%7B%22order%22%3A%221683%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21CAD%21131.88%2137.99%21%21%21620.30%21178.65%21%402101c4ea17855256729202871e0e22%2112000035453739364%21sea%21CA%212679274126%21X%211%210%21n_tag%3A-29919%3Bd%3A83956b84%3Bm03_new_user%3A-29895%3BpisId%3A5000000213279043&curPageLogUid=stycMYAbjV5A&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006041923883%7C_p_origin_prod%3A&search_p4p_id=20260731122113195671497748080000103304_2)
4.  Mitoot MG996R Servo motor: **$10**
- https://www.aliexpress.com/item/1005011712115377.html?spm=a2g0o.productlist.main.9.267050f850f8ce&algo_pvid=1a717184-78a2-4e74-8396-afe83ed2eb76&algo_exp_id=1a717184-78a2-4e74-8396-afe83ed2eb76-8&pdp_ext_f=%7B%22order%22%3A%22168%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21CAD%2120.18%219.89%21%21%2194.92%2146.52%21%402101ef5e17855142391096552e21e1%2112000056408220001%21sea%21CA%212679274126%21X%211%210%21n_tag%3A-29919%3Bd%3A83956b84%3Bm03_new_user%3A-29895&curPageLogUid=vXx516Doc9zJ&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005011712115377%7C_p_origin_prod%3A

Here's an image of the 3d model:
-

FIrst versionL *subject to change
<img width="828" height="533" alt="Screenshot 2026-07-30 at 10 27 04 PM" src="https://github.com/user-attachments/assets/546fdda9-45f8-42da-bf20-779c6e596f0a" />

Second and final version before funding 
for this version there currently isnt any landing gear but I will figure that out after I get the parts because I need to figure out how heavy it is and how low the servo motor will get. 
<img width="821" height="585" alt="Screenshot 2026-07-31 at 7 13 25 PM" src="https://github.com/user-attachments/assets/3b3539f7-dc79-4e42-871d-b5c917edbff1" />
<img width="707" height="459" alt="Screenshot 2026-07-31 at 7 15 06 PM" src="https://github.com/user-attachments/assets/5516fdfc-c9e1-40cf-a771-af439e948465" />



Theres a going to be a bunch of cool functions on this drone and I will mostly learn as I go. 
