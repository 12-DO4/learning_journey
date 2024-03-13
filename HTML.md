### extensions
- *.htm
- *.html
- *.xhtml


### for servers
- default.html
- index.html
- index.php
- index.asp
- index.aspx


### metadata for browsers
- title and meta description in search engine results
- meta charset ---------------> ISO-8559-1 & UTF-8
- meta name & content --------> description, author, copyright, special for facebook or wordpress, ...
- base?


_note: documentation can replace comments_


### DOCTYPE
- مشاكل توافقية؟ لي مبقتش مهمة؟ اى العناصر اللى المتصفح بيضيفها لوحده؟
- doctype for HTML5, HTML4, ...
- case insensitive
- rendering? quirks & standard modes?


### best practices
- headings (repeating - styles - SEO - hierarchy - usage)
- paired elements auto-closing their tags?
- case insensitive tag names (lowercase prefered)
- br at the end of the line
- css properties instead of html attributes for styling
- strong & b for important text and styling
- em & i for emphasised text and styling
- ins & u for inserted text and styling
- del & s for deleted text and styling
- ins & del for changing webpage text intead of removing and adding 
- don't put a paragraph plain text inside div use p instead
- symantic elements (HTML layout) instead of divs with class names


### block and inline elements
| element | block/inline |
|--|--|
| h1~h6 | block |
| p | block |
| a | inline |
| span | inline |
| b, strong | inline |
| em, i | inline |
| mark | inline |
| u, s, del, ins | inline |
| sub, sup, small | inline |
| br | ? |
| hr | block |
| ol, ul, li | block |
| dl, dd, dt | block |
| img | inline |
| figure | block | 
| figcaption | block | 
| table, thead, tbody, tfoot, colgroup | block |
| tr | block |
| td, th | inline |
| caption | block |
| div | block |
| header, nav, section, article, aside, footer | block |
| details, summary | block |


### text formater
- em, i?
- mark & find in page?
- sub & sup anothre use cases?
- big & small?
- ?


### links
- target attribute values?
- HTTP & FTP protocols?
- usages (bookmarks, emails with a query, phone calls, hypertext, download PDFs?)
- can do a functionality or only for navigation?
- fragments? & queries?
- ?


### paths
- name & extension
- relative & absolute
- on external servers & on folder structure
- path errors & console


### images
- images in accessiblity? alt text for screen readers?
- don't custom dimensions using width & height attributes use CSS instead
- figure & figcaption?
- map?
- ?


### lists
- user agent stylesheet (box model - list style type)
- attributes (reversed - start - 5 types) on list & list item elements
- nested lists (list items - another lists - another elements?)
- dl > (dt + dd)


### tables
- tables can be replaces with CSS styles & ?
- thead, tbody, tfoot arrangement & th in vertical table head?
- are td and th essential inside tr even if there's only one? can we replace them with a plain text?
- more about captions?
- table tibute for styling (cellpadding, cellspacing, width, height, border) use CSS instead
- spans (rowspan - colspan) & colgroup?


### semantic elements
- out of order? repeated? or always for standard layout?

```
body
|__ header
|   |__ nav
|__ main
|   |__ aside
|   |__ section
|       |__ article
|__ footer
```

```
figure
|__ img
|__ figcaption
```

```
details
|__ summary
|__ p
```

### audio & video
- browsers support? source order? one element with different audios (dynamic)?
- src & source?
- MIME type & extension?
- plain text inside or p? CSS styling?
- attributes (autoplay?, controls?, loop, muted)
- video has width and height attributes but audio not?
- poster attribute? loading a video? preload attribute?
- track element inside video element? its attribute(kind, srclang, label)


### forms
- 


### interesting topics
- user agent stylesheets in different browsers for different elements?
- hr CSS styling
- span use cases? containers? & before, after?
- symbols?, entities?, emojis? (case insensetive?, #?, charset?)
- why links in nav are ul>li? ul inside nav or only ul enough?
- detials element without summary is with a "details" text head
- 