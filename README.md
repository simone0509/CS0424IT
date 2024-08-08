# EPICODE_CS0424IT 🚀

Repository for my Cybersecurity Specialist course @ EPICODE -> CS0424IT.

![logo_ss](https://github.com/simone0509/CS0424IT/assets/92377343/1077c4c7-38a6-4be2-aee9-57ebde19fa4c)

![[Screenshot 2024-08-08 at 18.15.15.png]]

# Hack The Box: Resource Write-Up
## Part 1: user flag
### Information gathering
We began by identifying the target IP address (in my case `10.129.184.8`).
The next step was to determine which ports are open on this IP:

```bash
nmap -sV -sC 10.129.184.8
