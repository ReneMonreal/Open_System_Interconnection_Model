
<body>
  <main class="container">
    <article class="paper" id="top">
      <header class="title-block">
        <p class="pill">Research Paper</p>
        <h1>Computerized Telecommunication; The Open Systems Interconnection Model</h1>
        <p class="meta">
          <strong>Rene Monreal</strong>, Contact; renemonreal24@gmail.com <br/>
          Bachelors of Science, Cybersecurity; Expected Graduation June 2027<br/>
          Department of Computer Science and Engineering, University of North Texas<br/>
          Published October 31th, 2025
        </p>
      </header>
 <nav class="toc" aria-label="Table of contents">
        <strong>Contents</strong>
        <ol>
          <li><a href="#vocabulary">Vocabulary</a></li>
          <li><a href="#networks">Networks and Subnetting</a></li>
          <li><a href="#protocols">Protocols</a></li>
          <li><a href="#adjacent">Adjacent Layer interactions</a></li>
          <li><a href="#osi">The Open System Interconnection Model</a></li>
          <li><a href="#current-state">Open System Interconnection Model’s Current State</a>
            <ol>
              <li><a href="#layer7">Layer Seven: Application Layer</a></li>
              <li><a href="#layer6">Layer Six: Presentation Layer</a></li>
              <li><a href="#layer5">Layer Five: Session Layer</a></li>
              <li><a href="#layer4">Layer Four: Transport Layer</a></li>
              <li><a href="#layer3">Layer Three: Network Layer</a></li>
              <li><a href="#layer2">Layer Two: Data Link Layer</a></li>
              <li><a href="#layer1">Layer One: Physical Layer</a></li>
            </ol>
          </li>
          <li><a href="#zero-to-hero">Zero to Hero</a></li>
          <li><a href="#two-sides">The Two Sides</a></li>
          <li><a href="#authors-outlook">Authors Outlook</a></li>
          <li><a href="#conclusion">Conclusion</a></li>
          <li><a href="#references">References/Citations</a></li>
        </ol>
      </nav>

<section id="vocabulary">
        <h2>Vocabulary.</h2>
        <p><strong>Router</strong> - A router allows for connections across the internet. It is a component that contains multiple ports to connect itself to devices (oftentimes a switch in large corporations). Routers contain IP Addresses, these allow it to find destinations. Routers can communicate to one another over large distances, these networks can be in a single location to multiple locations.</p>
        <p><strong>Switches</strong> - Not to be confused with a router, a switch creates a Local Area Network for Hosts. Allows for connected devices to communicate to each other. Switches are in closer proximity than a router as they are limited due to physical connectivity.</p>
        <p><strong>Local Area Networks (LAN)</strong> - A LAN Network is created by a switch, it is a network that allows locally connected devices to communicate with each other and share data.</p>
        <p><strong>Data Segments</strong> - Data segments are a part of the Transport Layer (Layer Four). They are segments of the original piece of data that were broken apart for reliable and efficient transport. Each Segment of data contains a layer four header.</p>
        <p><strong>Data Packets</strong> - Data Packets pertain to the Network layer (Layer three). Packets include a layer three header, these headers contain an IP Address with the end host’s address.</p>
        <p><strong>Data Frames</strong> - Data Frames are encapsulated and decapsulated in the Data Link Layer (Layer two). Each frame contains a Layer two header and tail, within these.</p>
        <p><strong>Binary</strong> - A numbering system composed of 1’s and 0’s. While computers typically only accept these values, True and False can also be considered binary systems.</p>
        <p><strong>IP Addresses</strong> - A unique numerical identifier associated with every device connected to a computer network such as the internet.</p>
        <p><strong>IPV 4</strong> - The original formatting of an IP Address for every device. A 32-bit address allowing for billions of unique IP addresses. In a dotted decimal format consisting of four numbers between 0 and 255 separated by a period.</p>
        <p><strong>IPV 6</strong> - An updated model of the IPV 4 created for more unique addresses. 128 bits long allowing for an immense number of unique IP addresses. In a colon separated format of four hexadecimal digits by a group of eight.</p>
      </section>

<section id="networks">
        <h2>Networks and Subnetting</h2>
        <p><strong>Network</strong> - is a connection between two or more devices that allows for communication and data exchange, these can be connected in numerous ways; cables, radiowaves, satellites or inferred beams.</p>
        <p><strong>Subnetting</strong> - Can be considered as dividing a larger network into smaller, more manageable segments or subnetworks. These clusters communicate internally and with other subnets across broader networks such as the internet. Improving network efficiency, organization and security; typically found in offices, schools, and organizations.</p>
      </section>

<section id="protocols">
        <h2>Protocols</h2>
        <p>A standardized set of rules, procedures and operations that governs how devices communicate with each other. Defining format, timing, sequencing, implementation and error handling; TCP, IP, HTTP, and FTP are examples of these.</p>
      </section>

 <section id="adjacent">
        <h2>Adjacent Layer interactions</h2>
        <p><strong>Encapsulation</strong> - This process occurs for the sender, moving data from Layer Seven to Layer One. As data moves from layer to layer, each layer adds its own header containing control information specific to that layer's functions. Ensuring that the data can be properly routed, transmitted, and interpreted by the receiving devices protocols.</p>
        <p><strong>Decapsulation</strong> - Occurring for the receiver, data gets moved from Layer Seven to Layer One. As it moves up the Open System Interconnection model, each layer removes the headers revealing the information that was added during the encapsulation. Allowing the receiving device to accurately reconstruct the information.</p>
      </section>

<section id="osi">
        <h2>The Open System Interconnection Model</h2>
        <p>The Open system Interconnection Model is a seven-layer conceptual model that characterizes and standardizes the communication functions of a telecommunication or computing system across the industry. Consider this: A Mac system wants to communicate with a Windows system, programmed differently, this would've been impossible. However, due to the Open Systems Interconnection Model (OSI Model), the separate systems are able to communicate and send data across the internet. These systems are able to do so via industry Standardized Protocols, from start to finish, data gets passed along a seven layered stack with each layer doing something different. In this research paper we will go in depth into each layer of the Open System Interconnection Model (OSI Model) and showcase the true meaning behind each layer. The history and the evolution of the Open System Interconnection Model; from its humble beginnings to its incorporation and revisions such as the transition from IPV 4 to IPV 6 addressing. As well as the direction we could see the Open System Interconnection Model could be heading towards</p>
      </section>

<section id="current-state">
        <h2>Open System Interconnection Model’s Current State.</h2>

<h3 id="layer7">Layer Seven: Application Layer</h3>
        <p>This Layer is the closest to the end user, the layer we see. While Applications are not a part of the Application Layer, protocols such as HTTPS, HTTP, and DNS also pertain here (EX: https://www.website.com). The application layer acts as the users communication partner, synchronizing exchanges so you can send, manipulate, and retrieve data. It accomplishes this through encapsulation and decapsulation.</p>

<h3 id="layer6">Layer Six: Presentation Layer</h3>
        <p>The presentation’s layer translates data between the application/protocol and the network formats used on the network. It may compress files to improve speed and efficiency. Depending on if it is encapsulating or decapsulating data, it can encrypt or decrypt data during these processes. Ensuring information is protected and in the correct form for both the sender and receiver.</p>

<h3 id="layer5">Layer Five: Session Layer</h3>
        <p>Just as the name implies, a session is a duration and period of time in which two devices have a connection, from first opened to close. This level ensures that the session stays open long enough to complete the data transfer just to then close it once the process is complete to avoid wasting resources. It uses synchronization and resynchronization techniques by inserting synchronization check points in the data stream so that if an interruption occurs, the sessions can reset to a known state.  A common example of this technique can be found when downloading a file; every xx MB or GB, a checkpoint is placed, in case of a session interruption, we can always refer back to the closest checkpoint.</p>
        <p><strong>Action:</strong> The Session Layer sets up, manages, and terminates connections between a local host and a remote host.</p>
        <p><strong>Goal:</strong> To create and maintain a reliable connection between local and remote applications using synchronization and resynchronization to ensure efficient data transmission.</p>

<h3 id="layer4">Layer Four: Transport Layer</h3>
    <p>This layer is responsible for network traffic between hosts, as mentioned in The CISCO Learning Network; it "ensures that messages are delivered error-free, in sequence, and with no losses or duplications." Layer Four is where we see a change in developer roles, while Application Developers typically work from layer Seven to Five, Network Developers focus on layer four through one. In Layer Four, we see the data begin to assemble itself. If large enough, for reliable and efficient transport of data, the transport layer tends to break data in fragments or better yet "Segments". With this, a layer four header is attached onto each segment. At this stage, the data can be classified as a "Segment".</p>

<h3 id="layer3">Layer Three: Network Layer</h3>
        <p>Routers operate in this layer; routers are used to connect separate hosts across the internet (i.e., outside of a Local Area Network). This is what the Network Layer is doing, logically joining networks using IP addressing (32 Bits, represented as 4 octets, each ranging from 0 - 255). The IP Address is then stored within a Layer Three Network Header, creating a "Packet". Commonly misinterpreted with the structure of Layer two, the IP Address provides us an end-to-end path. Once at a router, the Layer Two frame gets decapsulated, the end-to-end IP Addresses within the packet are revealed. Once revealed, the destination is visible and proceeds in said direction.</p>
        <p><strong>Action:</strong> Route data across the internet by associating each segment (created in Layer Four: Network layer) with an IP address in the header creating a "Packet" (if you are encapsulating data) or Fragmentation and Reassembling packets (if you are decapsulating data) for end-to-end data transmission.</p>
        <p><strong>Goal:</strong> Subnet networks to prevent IP Waste, Performance Issues, and Mitigate Security Risks, allowing us to save IP address storage (for future host growths within the Local Area Network), keep networks faster, and protect sensitive data.</p>

<h3 id="layer2">Layer Two: Data Link Layer</h3>
        <p>Similar to Layer Three (The Network Layer), layer two is responsible for network traffic between nodes (i.e., PC to Switch, Switch to Router, or Router to Router) over the Physical Layer (Layer one). Like the Network Layer, the Data Link Layer attaches. Switches and bridges operate at this level. To ensure data transfer is error-free, Layer Two attaches a layer two header as well as a layer two tail to the existing packet (occurs during encapsulation), creating a "frame". Once the frame is sent over the connection (either via signals or the Internet) to the receiving node (typically a router), decapsulation of the Data Link Layer (Layer Two; Header and Tail) occurs, revealing the IP Address stored in the Layer Three Network Header. With the IP Address revealed, we know where to send the packet. Encapsulation occurs once more just before the data gets sent over to its next destination, a new Layer Two header and tail is then added onto the "Packet" creating a "Frame".</p>
        <p><strong>Action:</strong> Associates the data packet into frames containing a layer two head and a layer two tail (Encapsulation).</p>
        <p><strong>Goal:</strong> Ensure an error-free transfer from node to node for data frames, letting layers above it remain intact.</p>

<h3 id="layer1">Layer One: Physical Layer</h3>
        <p>This layer is the physical and electrical communication of unstructured raw data, using bits. Digital Bits are converted into electrical (wired connections) or radio waves (wireless connections). As per the name implies, this layer defines the physical characteristics used to transfer data between devices, such as voltage levels, maximum transmission distances, and physical connectors.</p>
        <p><strong>Goal:</strong> Contains data in the form of bits, uses physical methods to transport said data from one node to the next. Upon receiving data, the signals get converted into 1's and 0's sending it to the data link layer putting the frames back together.</p>
      </section>

<section id="zero-to-hero">
        <h2>Zero to Hero</h2>
        <p>In the early 1970’s (1972) a proposal of transferring data via “datagram” was presented by the International Network Working Group (INWG). A connectionless method of receiving and sending data without the physical connection. Consolidating the idea. The International Networking Group (INWG) proposed the idea to the international body overseeing telecommunication standards. Denied, a new committee was created, as mentioned in the article “OSI: The Internet That Wasn’t ”, this new committee focused their attention on “packet-switching networks within the international organization for Standardization (ISO)”. This committee then created a model that would separate the individual tasks carried out during computer communication into distinct layers. At the time, the group's biggest concern was against IBM and the telecommunication monopolies that had a massive agenda in dominating this space. To solve this, both parties came into an agreement. The International Organization for Standardization created means of designs for the Open System Intercoinnection (OSI) allowing for the foreseeable size and complexity increase. After funding, technical, monopolies and political problems, the OSI project was ended.  While the internet flourished on TCP/IP, on July 1992 in a committee meeting in Cambridge, leaders presented several worries and concerns about the limitations and capacity of this model that were arising with the exponential growth of the internet. This was a turning point for the OSI as some protocols and methods developed during the OSI were incredibly forecasted regarding this issue. The rebirth led to the successful implementation of the OSI Model across the internet keeping the original International Network Working Group’s ideas alive, creating a sense of openness and availability for everyone without a physical connection.</p>
      </section>

<section id="two-sides">
        <h2>The Two Sides</h2>
        <p>As most things go in the technology sector, it's important to identify the pros and cons of a system’s architecture. Introduced in the late 1970’s, the Open System Interconnection Model is very much outdated. Newer technologies and modern day protocols can bypass certain layers of the Open System Interconnection Model without an issue. Layer 7 (Application), Layer 6 (Presentation), and Layer 5 (Session) are oftentimes considered as one; “The application layer” for this sole reason. Reading this research paper you may have come to the conclusion that this is a lot to take in, especially if this is the first time you’re learning about the Open System Interaction Model. The complexity of these layers and the model in it of itself is a major disadvantage. Leading onto another major disadvantage, cost, The Open System Interconnection Model requires special hardware, software and operational training is needed to ensure full optimizational use of the Open System Interconnection Model.</p>
        <p>The Open System Interconnection Model is widely used due to the fact that it provides a “universal language for computer networking”; mentioned in the Amazon Web Services article “What is the OSI Model?”. Allowing for diverse technologies to communicate with each other world wide. This seven layered model allows for efficient and manageable troubleshooting, with being able to decapsulate or encapsulate the data, determining which layer the issue is located in is not a hard problem to solve. Once found teams can focus their attention into one particular layer, aiding security, vulnerability, and incident analysis and response teams .</p>
      </section>

<section id="authors-outlook">
        <h2>Authors Outlook</h2>
        <p>As a cybersecurity student at the University of North Texas, the Open System Interconnection Model’s concept of layered communication provides a structured framework that helps me understand how data is moved through a network and where various security measures can be applied. With each layer representing a specific function within the network communication, this allows for cybersecurity professionals to identify vulnerabilities, isolate threats, and implement target defenses. For instance, firewalls and intrusion detection systems often operate in the network and transport layers while encryption and authentication mechanisms protect data at the presentation and application layers. By breaking down these complex processes of digital communication into manageable parts, the Open System Interconnection Model not only enhances troubleshooting and network design but also provides a strategic foundation for developing multilayered security protocols. Ensuring the security of the data’s transmission at every layer of the Open System Interconnection Model.</p>
      </section>

<section id="conclusion">
        <h2>Conclusion</h2>
        <p>Summarizing, the Open System Interconnection Model remains one of the most significant theoretical frameworks in the history of networking. Despite being developed decades ago, its seven layered architecture continues to serve as a standardized network communication protocol. The concepts presented on how data travels, interacts, and transforms across interconnected systems provides clarity for diagnosing network issues, security data transmissions, and ensuring interoperability among diverse technologies.</p>
      </section>

<section id="references">
        <h2>References/Citations:</h2>
        <ol class="refs">
          <li>Cisco Learning Network. (n.d.). OSI model reference chart. Cisco. Retrieved October 30, 2025, https://learningnetwork.cisco.com/s/article/osi-model-reference-chart</li>
          <li>GeeksforGeeks. (2024, May 15). What is the OSI model? – Layers of OSI model. GeeksforGeeks. https://www.geeksforgeeks.org/computer-networks/open-systems-interconnection-model-osi/</li>
          <li>Coursera Staff. (2023, March 20). Understanding the application layer of the OSI model. Coursera. https://www.coursera.org/articles/application-layer</li>
          <li>Amazon Web Services. (n.d.). What is the OSI model? AWS. Retrieved October 30, 2025, from https://aws.amazon.com/what-is/osi-model/#:~:text=With%20the%20OSI%20reference%20model,of%20repeatable%20processes%20and%20protocols</li>
          <li>IEEE Spectrum. (2013, August 30). OSI: The Internet that wasn’t. IEEE Spectrum. https://spectrum.ieee.org/osi-the-internet-that-wasnt</li>
          <li>Lynexis. (2024, December 15). OSI model: Advantages, disadvantages, and expert guide. LiveBlog365. https://lynexis.liveblog365.com/2024/12/15/osi-model-advantages-disadvantages-and-expert-guide/?i=1</li>
        </ol>
      </section>

<hr />
      <p class="footer">Back to <a href="#top">top</a>.</p>
    </article>
  </main>
</body>
</html>
