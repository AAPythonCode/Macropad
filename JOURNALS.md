

# JOURNALS.md

  

### Hi! I'm Ayaan, a 13-year old who creates cool things for fun! Here, I'll put all of my journal entries to document what I did over time.

  

## 11/01/26

  

Before we begin, though...

  

### The Checklist!!!

  

- [x] Create the schematic

- [ ] Wire the PCB

- [ ] Order the parts + PCB

- [ ] Assembly

- [ ] Showcase

  
### What I Did Today

Today I thought of creating a macropad as an example project for my very own Hack Club right here @ Thornton Middle School! So, I began planning as my first steps.

  
### Planning
Here's what I planned:

- Blue/Brown Cherry MX switches

- 6 keys in total

- A 128x32 oled on the top to display information (such as volume, music, etc.)

- A rotary encoder on the top left to change the volume and music playback

- An ESP32-C3 Supermini to encode the logic

- A case to surround the entire build

- A PCB to wire everything together

 ### Compl

After this, I began on the schematic. Since I wanted to work on this at school, I decided to create the PCB on EasyEDA, as it utilized a web interface that was extremely similar to KiCad, my go-to PCB creation platform. After a bit of pain and suffering trying to import KiCad footprints into EasyEDA, I was finally able to complete the schematic!

  

  

### Difficulties and Hurdles

  

  

Creating a schematic, especially in a new application with a different UI and environment, is extremely difficult (unless you know far more than me in PCB creation and have experience)! So, here's everything that went wrong:

  

- Adapting to the web interface

  

- KiCad doesn’t run on a web browser. So when I saw how EasyEDA’s layout had changed due to the completely different interface, I was quite annoyed, especially due to the fact that the keybinds were different! So long for W for wiring...

  

- Importing and placing parts

- Seems like EasyEDA apparently doesn't have many parts that actually fit my needs, especially the microcontroller section. Of course, all EasyEDA would recommend me was the stock chip that was preinstalled on the microcontroller itself (figures, as they most likely want you to create a microcontroller yourself),a but the public section was able to save me with user-created parts!

AND NOW...
### Images!!!
**The full schematic :)**
![enter image description here](https://cdn.hackclub.com/01a1dcf1-77ce-7505-a96f-4ccbd6cf2f57/Screenshot%202026-11-14%20at%206.02.48%E2%80%AFPM.png)

**My life and savior during these dark times known as ADAPTING TO EASYEDA!1!!**
![enter image description here](https://cdn.hackclub.com/01a1dcf4-74e2-7230-af67-6d3085d4b965/Screenshot%202026-11-14%20at%206.06.05%E2%80%AFPM.png)

**This USBC port wasn't too hard to integrate :)**
![enter image description here](https://cdn.hackclub.com/01a1dcf5-f6db-75dc-a301-b2c7a97ee93e/Screenshot%202026-11-14%20at%206.07.43%E2%80%AFPM.png)

## 11/5-11/8

Before we begin, though...

### The Checklist!!!

- [x] Create the schematic

- [x] Wire the PCB

- [ ] Order the parts + PCB

- [ ] Assembly

- [ ] Showcase

### What I Did Today

Of course, after you create a schematic, you'd better wire it to get one step closer to ordering your PCB! Of course, that's exactly what I did today, but not without a smidge of hardship along the way...

### Interface Issues

Yet again, I was much more experienced with working with the KiCad's native interface, so getting used to even the wiring portion was a semi-nightmare. For example, I wasn't able to click the <span><img src="https://cdn.hackclub.com/01a1e081-48c8-7703-8ccf-619aed6f3160/Screenshot_2026-11-15_at_10.35.24_AM-removebg-preview%20(2).png" width="21"></span> key to create a via while wiring; it would just open a random menu similar to right-clicking! However, just like the schematic, I was able to change the hotkey settings to EasyEDA Standard, which had similar settings to that of KiCad's. 
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE3NTc2MjEyNDVdfQ==
-->
