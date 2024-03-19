## HTML
### content
- plaintext, comments, entities, symbols, emojis, HTML elements
- nesting


_note: documentation can replace comments_


### DOCTYPE
- doctype for HTML5, HTML4, ...
- case insensitive
- rendering? quirks & standard modes?
- مشاكل توافقية؟ لي مبقتش مهمة؟ اى العناصر اللى المتصفح بيضيفها لوحده؟


### metadata for browsers
- title and meta description in search engine results
- meta charset (ISO-8559-1 & UTF-8)
- meta name & content (description, author, copyright, special for facebook or wordpress, ...)
- base? (for external css files, imgs, scripts!)
- style vs link?
- script vs noscript?


### body
- attributes for background: bgcolor(color), background(image)
- attributes for links colors: link vs alink vs vlink


### headings & paragraphs
- h1~h6 & p (user agent stylesheet & box model)
- hgroup (used for heading of a section: h2 and p!)


### text formater
- strong vs b
- em vs i vs cite vs dfn vs address
- u & s vs ins & del
- mark (find in page same background color!) & bgcolor attribute
- sub vs sup (another use cases rather than in maths and chemistry?)
- big(deprecated) vs small
- q vs blockquote (user agent stylesheet & frameworks stylesheets?, q adds "" cannot be copied!)
- wbr vs br?
- bdi? vs bdo? vs center (deprecated) vs dir element vs dir & align attributes 
- code vs var vs pre vs kbd vs samp (user agent stylesheet fonts?)
- abbr (title attribute, user agent stylesheets underline it!)
- font(size:1~7, face, color)


### links
- target attribute values?
- HTTP & FTP protocols?
- usages (bookmarks:linkage with id or name attribute!, emails with a query:subject & body, phone calls, hypertext:local files or on servers, download PDFs?)
- can do a functionality or only for navigation?
- paths (name & extension - relative & absolute - on external servers & on folder structure - path errors & console in devtools - fragments? & queries?)


### images
- images in accessiblity? alt text for screen readers!
- figure (figcaption + img : is the order important?, can img be another image element?)
- map?
- picture?
- svg?
- emojis?
- figure vs img vs map vs picture vs input:image vs svg?
- icons & favicons (how to add them?, why only i element?!)


### lists
- user agent stylesheet (box model - list-style-type CSS property vs type attribute)
- attributes (reversed - start - type) on list & list item elements
- nesting (list items - another lists - another elements? - dropdown component in nav)
- datagrid? menu?
- ul
    - li
    - ul
        - li
        - li
    - li
- ol
    - li
    - ul
        - li
    - li
    - li
- dl
    - dd
    - dt


### tables
- tables can be replaces with CSS styles & ?
- thead, tbody, tfoot arrangement & th in vertical table head?
- are td and th essential inside tr even if there's only one? can we replace them with a plain text?
- more about captions?
- table tibute for styling (cellpadding, cellspacing, width, height, border) use CSS instead
- spans (rowspan - colspan) & colgroup>col (only for styles!) vs tr>td vs tr>th?
- table
    - colgroup
        - col
        - col
        - col
        - col
    - thead
        - tr
            - th
            - th
            - th
    - tbody
        - tr
            - td
            - td
        - tr
            - td
            - td
            - td
    - tfoot
        - tr
            - td


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
- validation (order?, pattern for email & password?, min & max vs minlength & maxlength?, required)
- required="required" for old versions? required="false"?
- use cases for placeholder? (without label, more info about input field e.g. example@example.com)
- small element, placeholder attribute or floating modal for more info about input field (e.g. write a complex password, password should contain a capital letter, ...)
- value attribute can be used for viewing info while editing your profile
- value vs placeholder, name vs for & id?, sending data without name attribute?, checkbox, radio, option without value attribute?
- action="", action="the current webpage" & without adding action attribute?
- why hidden? (hide some content from user or avoid editing!, grab id and send it with form inputs?)
- why readonly? (avoid editing emails or usernames but sent with form data)
- why disabled? (avoid editing emails or usernames but not sent with form data)
- autofocus (use cases?: from redirections?)
- prevent copying & pasting for retype password input?
- checked vs selected?
- novalidate?
- form elements (different user agent stylesheets in browsers, overwriting on user agent stylesheet)
    - label (for linkage with input id)
    - input (always return strings? icons inside some?)
        - type attribute
            - text (are any characters forbidden)
            - password (show & hide)
            - email (check existance of email or only pattern?)
            - checkbox vs radio (default value, checked atribute, click on label as well as input)
            - color (value: hexcode only?)
            - range (min, max, step & value, vs progress element?)
            - submit (enable, redirection to action value?, form of data sent, reset if the same page?)
            - reset
            - button? vs submit & reset?
            - date vs datetime vs datetime-local vs month vs week vs time? (default value?)
            - image? & file (showing image? sending file? return file name & extension? drag & drop?)
            - hidden? vs hidden logical attribute?
            - number (validation? return datatype number? vs range?)
            - tel (pattern? which country?)
            - search (icons inside: close and search? how to use?)
            - url (check existance of url on servers?)
        - list attribute (linkage with datalist element)
    - select (size attribute, multiple attribute: ctrl + click)
        - optgroup (label attribute)
            - option (plain text vs value of value attribute?, selected attribute)
    - textarea (vs input:text)
    - datalist (vs select?:search)
        - option (optgroup? without closing tag or content only value attribute!)
    - fieldset? legend? output?


### another elements
- button element (vs input:submit vs input:reset vs input:button vs a element?)
- iframe? (some websites prevent being an iframe inside a webpage, APIs are more efficient!)
- embed?
- object?
- noscript?
- ruby?


### best practices
- add DOCTYPE element above
- write comments in the right place 
- headings (repeating - styles - SEO - hierarchy - usage)
- paired elements auto-closing their tags?
- case insensitive tag names (lowercase prefered)
- br at the end of the line
- css properties instead of html attributes for styling (width & height as CSS properties instead of width & height as HTML attribute or rows & col for attributes textarea element, ...)
- strong & b for important text & styling
- em & i for emphasised text & styling
- ins & u for inserted text & styling
- del & s for deleted text & styling
- ins & del for changing webpage text intead of adding & removing (friendly for SEO)
- don't put a paragraph plain text inside div use p instead
- symantic elements (HTML layout) instead of divs with class names
- add labels for inputs and group them into a div or fieldset
- button for js function & a for navigation in websites
- pay attention for acessiblity cases with adding attributes, using situable HTML structure, ...


### block and inline elements
| element | block/inline |
|--|--|
| html, head, body, title, meta, base, script, style, link, noscript | ? |
| hgroup, h1~h6 | block |
| p | block |
| a, button | inline |
| span | inline |
| b, strong | inline |
| em, i | inline |
| mark | inline |
| u, s, del, ins | inline |
| sub, sup, small | inline |
| q | inline |
| blockquote | block |
| bdo, bdi | inline |
| address | block |
| br, wbr | ? |
| hr | block |
| pre | block |
| kbd, code, samp, var | inline |
| ol, ul, li | block |
| dl, dd, dt | block |
| img | inline |
| figure, figcaption | block | 
| audio, video | inline |
| source | ? |
| track | block |
| iframe | inline |
| table, thead, tbody, tfoot | block |
| colgroup, col | ? |
| tr | block |
| td, th | inline |
| caption | block |
| div | block |
| header, nav, section, article, aside, footer | block |
| details, summary | block |
| form, fieldset, legend, optgroup, option | block |
| label, input, textarea, select, datalist, output | inline |


## interesting topics
- extensions (.htm, .html, .xml)
- main file for servers (default.html - index.html - index.php - index.asp - index.aspx)
- user agent stylesheets in different browsers for different elements?
- why deprecated elements?
- hr CSS styling
- span use cases? containers? & before, after?
- symbols?, entities?, emojis? (case insensetive?, #?, charset?)
- why links in nav are ul>li? ul inside nav or only ul enough?
- detials element without summary is with a "details" text head (is summary element added?)
- logical attributes values?
- URI vs URL?
- another elements inside lists, tables, forms, figures, ...? more about nesting?
- more about validations in HTML forms
- more about devtools? (network:forms?, console:errors?, elements & sources?, lighthouse:reports?, ...)
- post, get & dialog methods in form element? query string? query string parameters? Database?
- more about metadata, Acessiblity, SEO, best practices, performance
- colors & contrast ratio
- name vs id attributes


## Acessiblity
- whom are concerned?
- attributes (role? - lang? - tabindex? - aria-checked? - aria-labelledby? - aria-*?)
- tools (black and white view? - magnifier? - screen readers?)
- websites (WAI)
