
    

  

<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
    <script>var NREUMQ=[];NREUMQ.push(["mark","firstbyte",new Date().getTime()]);</script>
        <title>sw/airborne/modules/sensors/baro_amsys.c at master from Bruzzlee/paparazzi - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />

    <link href="https://d3nwyuy0nl342s.cloudfront.net/059e1b53d9a173db4944d1a371661fbc5731a88a/stylesheets/bundle_github.css" media="screen" rel="stylesheet" type="text/css" />
    

    <script type="text/javascript">
      if (typeof console == "undefined" || typeof console.log == "undefined")
        console = { log: function() {} }
    </script>
    <script type="text/javascript" charset="utf-8">
      var GitHub = {
        assetHost: 'https://d3nwyuy0nl342s.cloudfront.net'
      }
      var github_user = null
      
    </script>
    <script src="https://d3nwyuy0nl342s.cloudfront.net/javascripts/jquery/jquery-1.4.2.min.js" type="text/javascript"></script>
    <script src="https://d3nwyuy0nl342s.cloudfront.net/59832ec8fc130466f78be3988b8d8c9e76c897a1/javascripts/bundle_github.js" type="text/javascript"></script>


    
    <script type="text/javascript" charset="utf-8">
      GitHub.spy({
        repo: "Bruzzlee/paparazzi"
      })
    </script>

    
  <link rel='canonical' href='/Bruzzlee/paparazzi/blob/945f9d242905e19123d7821468936ab05859119d/sw/airborne/modules/sensors/baro_amsys.c'>

  <link href="https://github.com/Bruzzlee/paparazzi/commits/master.atom" rel="alternate" title="Recent Commits to paparazzi:master" type="application/atom+xml" />

        <meta name="description" content="paparazzi - Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository." />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "Bruzzlee/paparazzi";
      GitHub.currentRef = 'master';
      GitHub.commitSHA = "945f9d242905e19123d7821468936ab05859119d";
      GitHub.currentPath = 'sw/airborne/modules/sensors/baro_amsys.c';
      GitHub.masterBranch = "master";

      
    </script>
  

        <script type="text/javascript">
      var _gaq = _gaq || [];
      _gaq.push(['_setAccount', 'UA-3769691-2']);
      _gaq.push(['_setDomainName', 'none']);
      _gaq.push(['_trackPageview']);
      _gaq.push(['_trackPageLoadTime']);
      (function() {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
      })();
    </script>

    
  </head>

  

  <body class="logged_out page-blob  windows env-production">
    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="true">
        
          <a class="logo boring" href="https://github.com">
            
            <img alt="github" class="default" height="45" src="https://d3nwyuy0nl342s.cloudfront.net/images/modules/header/logov5.png" />
            <!--[if (gt IE 8)|!(IE)]><!-->
            <img alt="github" class="hover" height="45" src="https://d3nwyuy0nl342s.cloudfront.net/images/modules/header/logov5-hover.png" />
            <!--<![endif]-->
          </a>
        
        
        <div class="topsearch">
  
    <ul class="nav logged_out">
      
      <li class="pricing"><a href="/plans">Pricing and Signup</a></li>
      
      <li class="explore"><a href="/explore">Explore GitHub</a></li>
      <li class="features"><a href="/features">Features</a></li>
      
      <li class="blog"><a href="/blog">Blog</a></li>
      
      <li class="login"><a href="/login?return_to=%2FBruzzlee%2Fpaparazzi%2Fblob%2Fmaster%2Fsw%2Fairborne%2Fmodules%2Fsensors%2Fbaro_amsys.c">Login</a></li>
    </ul>
  
</div>

      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public fork   instapaper_ignore readability-menu">

      

      <div class="title-actions-bar">
        <h1>
          <a href="/Bruzzlee">Bruzzlee</a> / <strong><a href="/Bruzzlee/paparazzi">paparazzi</a></strong>
          
            <span class="fork-flag">
              
              <span class="text">forked from <a href="/paparazzi/paparazzi">paparazzi/paparazzi</a></span>
            </span>
          
          
        </h1>

        
    <ul class="actions">
      

      
        <li class="for-owner" style="display:none"><a href="/Bruzzlee/paparazzi/admin" class="minibutton btn-admin "><span><span class="icon"></span>Admin</span></a></li>
        <li>
          <a href="/Bruzzlee/paparazzi/toggle_watch" class="minibutton btn-watch " id="watch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'ae54b1c043d2c2b06fc6532c21d1ea3871323e5f'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Watch</span></a>
          <a href="/Bruzzlee/paparazzi/toggle_watch" class="minibutton btn-watch " id="unwatch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'ae54b1c043d2c2b06fc6532c21d1ea3871323e5f'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Unwatch</span></a>
        </li>
        
          
            <li class="for-notforked" style="display:none"><a href="/Bruzzlee/paparazzi/fork" class="minibutton btn-fork " id="fork_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'ae54b1c043d2c2b06fc6532c21d1ea3871323e5f'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Fork</span></a></li>
            <li class="for-hasfork" style="display:none"><a href="#" class="minibutton btn-fork " id="your_fork_button"><span><span class="icon"></span>Your Fork</span></a></li>
          

          
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers"><a href="/Bruzzlee/paparazzi/watchers" title="Watchers" class="tooltipped downwards">0</a></li>
          <li class="forks"><a href="/Bruzzlee/paparazzi/network" title="Forks" class="tooltipped downwards">60</a></li>
        </ul>
      </li>
    </ul>

      </div>

        
  <ul class="tabs">
    <li><a href="/Bruzzlee/paparazzi" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="/Bruzzlee/paparazzi/commits/master" highlight="repo_commits">Commits</a></li>
    <li><a href="/Bruzzlee/paparazzi/network" highlight="repo_network">Network</a></li>
    <li><a href="/Bruzzlee/paparazzi/pulls" highlight="repo_pulls">Pull Requests (0)</a></li>

    

    

            
    <li><a href="/Bruzzlee/paparazzi/graphs" highlight="repo_graphs">Graphs</a></li>

    <li class="contextswitch nochoices">
      <span class="toggle leftwards" >
        <em>Branch:</em>
        <code>master</code>
      </span>
    </li>
  </ul>

  <div style="display:none" id="pl-description"><p><em class="placeholder">click here to add a description</em></p></div>
  <div style="display:none" id="pl-homepage"><p><em class="placeholder">click here to add a homepage</em></p></div>

  <div class="subnav-bar">
  
  <ul>
    <li>
      <a href="/Bruzzlee/paparazzi/branches" class="dropdown">Switch Branches (6)</a>
      <ul>
        
          
          
            <li><a href="/Bruzzlee/paparazzi/blob/HB/sw/airborne/modules/sensors/baro_amsys.c" data-name="HB">HB</a></li>
          
        
          
          
            <li><a href="/Bruzzlee/paparazzi/blob/cam/sw/airborne/modules/sensors/baro_amsys.c" data-name="cam">cam</a></li>
          
        
          
          
            <li><a href="/Bruzzlee/paparazzi/blob/campaign2010/sw/airborne/modules/sensors/baro_amsys.c" data-name="campaign2010">campaign2010</a></li>
          
        
          
          
            <li><a href="/Bruzzlee/paparazzi/blob/dev/sw/airborne/modules/sensors/baro_amsys.c" data-name="dev">dev</a></li>
          
        
          
            <li><strong>master &#x2713;</strong></li>
            
          
          
            <li><a href="/Bruzzlee/paparazzi/blob/new-state-interface/sw/airborne/modules/sensors/baro_amsys.c" data-name="new-state-interface">new-state-interface</a></li>
          
        
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown defunct">Switch Tags (0)</a>
      
    </li>
    <li>
    
    <a href="/Bruzzlee/paparazzi/branches" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  
  



        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

        <a href="/Bruzzlee/paparazzi/downloads" class="download-source" id="download_button" title="Download source, tagged packages and binaries."><span class="icon"></span>Downloads</a>

      <div id="repository_desc_wrapper">
      <div id="repository_description" rel="repository_description_edit">
        
          <p>Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository.
            <span id="read_more" style="display:none">&mdash; <a href="#readme">Read more</a></span>
          </p>
        
      </div>

      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/Bruzzlee/paparazzi/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="ae54b1c043d2c2b06fc6532c21d1ea3871323e5f" /></div>
          <input type="hidden" name="field" value="repository_description">
          <input type="text" class="textfield" name="value" value="Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository.">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      
      <div class="repository-homepage" id="repository_homepage" rel="repository_homepage_edit">
        <p><a href="http://paparazzi.enac.fr" rel="nofollow">http://paparazzi.enac.fr</a></p>
      </div>

      <div id="repository_homepage_edit" style="display:none;" class="inline-edit">
        <form action="/Bruzzlee/paparazzi/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="ae54b1c043d2c2b06fc6532c21d1ea3871323e5f" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="http://paparazzi.enac.fr">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>
      </div>
      <div class="rule "></div>
      <div id="url_box" class="url-box">
  

  <ul class="clone-urls">
    
      
      <li id="http_clone_url"><a href="https://github.com/Bruzzlee/paparazzi.git" data-permissions="Read-Only">HTTP</a></li>
      <li id="public_clone_url"><a href="git://github.com/Bruzzlee/paparazzi.git" data-permissions="Read-Only">Git Read-Only</a></li>
    
    
  </ul>
  <input type="text" spellcheck="false" id="url_field" class="url-field" />
        <span style="display:none" id="url_box_clippy"></span>
      <span id="clippy_tooltip_url_box_clippy" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://d3nwyuy0nl342s.cloudfront.net/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=url_box_clippy&amp;copied=&amp;copyto=">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://d3nwyuy0nl342s.cloudfront.net/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=url_box_clippy&amp;copied=&amp;copyto="
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

  <p id="url_description"><strong>Read+Write</strong> access</p>
</div>

    </div>

    <div class="frame frame-center tree-finder" style="display:none">
      <div class="breadcrumb">
        <b><a href="/Bruzzlee/paparazzi">paparazzi</a></b> /
        <input class="tree-finder-input" type="text" name="query" autocomplete="off" spellcheck="false">
      </div>

      
        <div class="octotip">
          <p>
            <a href="/Bruzzlee/paparazzi/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever">Dismiss</a>
            <strong>Octotip:</strong> You've activated the <em>file finder</em> by pressing <span class="kbd">t</span>
            Start typing to filter the file list. Use <span class="kbd badmono">↑</span> and <span class="kbd badmono">↓</span> to navigate,
            <span class="kbd">enter</span> to view files.
          </p>
        </div>
      

      <table class="tree-browser" cellpadding="0" cellspacing="0">
        <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
        <tr class="js-no-results no-results" style="display: none">
          <th colspan="2">No matching files</th>
        </tr>
        <tbody class="js-results-list">
        </tbody>
      </table>
    </div>

    <div id="jump-to-line" style="display:none">
      <h2>Jump to Line</h2>
      <form>
        <input class="textfield" type="text">
        <div class="full-button">
          <button type="submit" class="classy">
            <span>Go</span>
          </button>
        </div>
      </form>
    </div>


        

      </div><!-- /.pagehead -->

      

  







<script type="text/javascript">
  GitHub.downloadRepo = '/Bruzzlee/paparazzi/archives/master'
  GitHub.revType = "master"

  GitHub.repoName = "paparazzi"
  GitHub.controllerName = "blob"
  GitHub.actionName     = "show"
  GitHub.currentAction  = "blob#show"

  
    GitHub.loggedIn = false
  

  
</script>




<div class="flash-messages"></div>


  <div id="commit">
    <div class="group">
        
  <div class="envelope commit">
    <div class="human">
      
        <div class="message"><pre><a href="/Bruzzlee/paparazzi/commit/945f9d242905e19123d7821468936ab05859119d">Funnel in Flightplan - modified Figure-8 that it is possible to fly a bi...</a> </pre></div>
      

      <div class="actor">
        <div class="gravatar">
          
          <img src="https://secure.gravatar.com/avatar/f3a23a2d34dfa9b0e115b9c010e65aa2?s=140&d=https://d3nwyuy0nl342s.cloudfront.net%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="30" height="30"  />
        </div>
        <div class="name"><a href="/Bruzzlee">Bruzzlee</a> <span>(author)</span></div>
        <div class="date">
          <abbr class="relatize" title="2011-06-06 10:19:58">Mon Jun 06 10:19:58 -0700 2011</abbr>
        </div>
      </div>

      

    </div>
    <div class="machine">
      <span>c</span>ommit&nbsp;&nbsp;<a href="/Bruzzlee/paparazzi/commit/945f9d242905e19123d7821468936ab05859119d" hotkey="c">945f9d242905e19123d7</a><br />
      <span>t</span>ree&nbsp;&nbsp;&nbsp;&nbsp;<a href="/Bruzzlee/paparazzi/tree/945f9d242905e19123d7821468936ab05859119d/sw/tools/gen_flight_plan.ml" hotkey="t">8a165f58ac2c3c560480</a><br />
      
        <span>p</span>arent&nbsp;
        
        <a href="/Bruzzlee/paparazzi/commit/69fe6b5d2ec9caf966aa2b1c696b08aa63ae25a6" hotkey="p">69fe6b5d2ec9caf966aa</a>
      

    </div>
  </div>

    </div>
  </div>



  <div id="slider">

  

    <div class="breadcrumb" data-path="sw/airborne/modules/sensors/baro_amsys.c/">
      <b><a href="/Bruzzlee/paparazzi/tree/945f9d242905e19123d7821468936ab05859119d">paparazzi</a></b> / <a href="/Bruzzlee/paparazzi/tree/945f9d242905e19123d7821468936ab05859119d/sw">sw</a> / <a href="/Bruzzlee/paparazzi/tree/945f9d242905e19123d7821468936ab05859119d/sw/airborne">airborne</a> / <a href="/Bruzzlee/paparazzi/tree/945f9d242905e19123d7821468936ab05859119d/sw/airborne/modules">modules</a> / <a href="/Bruzzlee/paparazzi/tree/945f9d242905e19123d7821468936ab05859119d/sw/airborne/modules/sensors">sensors</a> / baro_amsys.c       <span style="display:none" id="clippy_515">sw/airborne/modules/sensors/baro_amsys.c</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://d3nwyuy0nl342s.cloudfront.net/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_515&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://d3nwyuy0nl342s.cloudfront.net/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_515&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="sw/airborne/modules/sensors/baro_amsys.c/" data-canonical-url="/Bruzzlee/paparazzi/blob/945f9d242905e19123d7821468936ab05859119d/sw/airborne/modules/sensors/baro_amsys.c">
        
          <ul class="big-actions">
            
            <li><a class="file-edit-link minibutton" href="/Bruzzlee/paparazzi/edit/__current_ref__/sw/airborne/modules/sensors/baro_amsys.c"><span>Edit this file</span></a></li>
          </ul>
        

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://d3nwyuy0nl342s.cloudfront.net/images/icons/txt.png" width="16" /></span>
                <span class="mode" title="File Mode">100755</span>
                
                  <span>199 lines (172 sloc)</span>
                
                <span>5.995 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/Bruzzlee/paparazzi/raw/master/sw/airborne/modules/sensors/baro_amsys.c" id="raw-url">raw</a></li>
                
                  <li><a href="/Bruzzlee/paparazzi/blame/master/sw/airborne/modules/sensors/baro_amsys.c">blame</a></li>
                
                <li><a href="/Bruzzlee/paparazzi/commits/master/sw/airborne/modules/sensors/baro_amsys.c">history</a></li>
              </ul>
            </div>
            
  <div class="data type-c">
    
      <table cellpadding="0" cellspacing="0">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
</pre>
          </td>
          <td width="100%">
            
              
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * Driver for a Amsys Barometric Sensor I2C</span></div><div class='line' id='LC3'><span class="cm"> * AMS 5812-0150-A</span></div><div class='line' id='LC4'><span class="cm"> *</span></div><div class='line' id='LC5'><span class="cm"> * Copyright (C) 2010 The Paparazzi Team</span></div><div class='line' id='LC6'><span class="cm"> *</span></div><div class='line' id='LC7'><span class="cm"> * This file is part of paparazzi.</span></div><div class='line' id='LC8'><span class="cm"> *</span></div><div class='line' id='LC9'><span class="cm"> * paparazzi is free software; you can redistribute it and/or modify</span></div><div class='line' id='LC10'><span class="cm"> * it under the terms of the GNU General Public License as published by</span></div><div class='line' id='LC11'><span class="cm"> * the Free Software Foundation; either version 2, or (at your option)</span></div><div class='line' id='LC12'><span class="cm"> * any later version.</span></div><div class='line' id='LC13'><span class="cm"> *</span></div><div class='line' id='LC14'><span class="cm"> * paparazzi is distributed in the hope that it will be useful,</span></div><div class='line' id='LC15'><span class="cm"> * but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC16'><span class="cm"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC17'><span class="cm"> * GNU General Public License for more details.</span></div><div class='line' id='LC18'><span class="cm"> *</span></div><div class='line' id='LC19'><span class="cm"> * You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC20'><span class="cm"> * along with paparazzi; see the file COPYING.  If not, write to</span></div><div class='line' id='LC21'><span class="cm"> * the Free Software Foundation, 59 Temple Place - Suite 330,</span></div><div class='line' id='LC22'><span class="cm"> * Boston, MA 02111-1307, USA.</span></div><div class='line' id='LC23'><span class="cm"> */</span></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><span class="cp">#include &quot;sensors/baro_amsys.h&quot;</span></div><div class='line' id='LC26'><span class="cp">#include &quot;mcu_periph/i2c.h&quot;</span></div><div class='line' id='LC27'><span class="cp">#include &quot;estimator.h&quot;</span></div><div class='line' id='LC28'><span class="cp">#include &lt;math.h&gt;</span></div><div class='line' id='LC29'><span class="cp">#include &quot;generated/flight_plan.h&quot; </span><span class="c1">// for ground alt</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><span class="cp">//Messages</span></div><div class='line' id='LC32'><span class="cp">#include &quot;mcu_periph/uart.h&quot;</span></div><div class='line' id='LC33'><span class="cp">#include &quot;messages.h&quot;</span></div><div class='line' id='LC34'><span class="cp">#include &quot;downlink.h&quot;</span></div><div class='line' id='LC35'><span class="cp">//#include &quot;gps.h&quot;</span></div><div class='line' id='LC36'><span class="cp">#ifndef DOWNLINK_DEVICE</span></div><div class='line' id='LC37'><span class="cp">#define DOWNLINK_DEVICE DOWNLINK_AP_DEVICE</span></div><div class='line' id='LC38'><span class="cp">#endif</span></div><div class='line' id='LC39'><br/></div><div class='line' id='LC40'><span class="cp">#ifdef SITL</span></div><div class='line' id='LC41'><span class="cp">#include &quot;gps.h&quot;</span></div><div class='line' id='LC42'><span class="cp">#endif</span></div><div class='line' id='LC43'><br/></div><div class='line' id='LC44'><span class="cp">#define BARO_AMSYS_ADDR 0xF2</span></div><div class='line' id='LC45'><span class="cp">#define BARO_AMSYS_REG 0x07</span></div><div class='line' id='LC46'><span class="cp">#define BARO_AMSYS_SCALE 0.32</span></div><div class='line' id='LC47'><span class="cp">#define BARO_AMSYS_MAX_PRESSURE 103400 </span><span class="c1">// Pascal</span></div><div class='line' id='LC48'><span class="cp">#define BARO_AMSYS_OFFSET_MAX 29491</span></div><div class='line' id='LC49'><span class="cp">#define BARO_AMSYS_OFFSET_MIN 3277</span></div><div class='line' id='LC50'><span class="cp">#define BARO_AMSYS_OFFSET_NBSAMPLES_INIT 40</span></div><div class='line' id='LC51'><span class="cp">#define BARO_AMSYS_OFFSET_NBSAMPLES_AVRG 60</span></div><div class='line' id='LC52'><br/></div><div class='line' id='LC53'><span class="cp">#ifdef MEASURE_AMSYS_TEMPERATURE</span></div><div class='line' id='LC54'><span class="cp">#define TEMPERATURE_AMSYS_OFFSET_MAX 29491</span></div><div class='line' id='LC55'><span class="cp">#define TEMPERATURE_AMSYS_OFFSET_MIN 3277</span></div><div class='line' id='LC56'><span class="cp">#define TEMPERATURE_AMSYS_MAX 110</span></div><div class='line' id='LC57'><span class="cp">#define TEMPERATURE_AMSYS_MIN -25</span></div><div class='line' id='LC58'><span class="cp">#endif</span></div><div class='line' id='LC59'><br/></div><div class='line' id='LC60'><span class="cp">//#define BARO_AMSYS_R 0.5</span></div><div class='line' id='LC61'><span class="cp">//#define BARO_AMSYS_SIGMA2 0.1</span></div><div class='line' id='LC62'><span class="cp">//#define BARO_ALT_CORRECTION 0.0</span></div><div class='line' id='LC63'><span class="cp">#ifndef BARO_AMSYS_I2C_DEV</span></div><div class='line' id='LC64'><span class="cp">#define BARO_AMSYS_I2C_DEV i2c0</span></div><div class='line' id='LC65'><span class="cp">#endif</span></div><div class='line' id='LC66'><br/></div><div class='line' id='LC67'><span class="c1">// Global variables</span></div><div class='line' id='LC68'><span class="kt">uint16_t</span> <span class="n">pBaroRaw</span><span class="p">;</span></div><div class='line' id='LC69'><span class="kt">uint16_t</span> <span class="n">tBaroRaw</span><span class="p">;</span></div><div class='line' id='LC70'><span class="kt">float</span> <span class="n">baro_amsys_offset</span><span class="p">;</span></div><div class='line' id='LC71'><span class="n">bool_t</span> <span class="n">baro_amsys_valid</span><span class="p">;</span></div><div class='line' id='LC72'><span class="kt">float</span> <span class="n">baro_amsys_altitude</span><span class="p">;</span></div><div class='line' id='LC73'><span class="kt">float</span> <span class="n">baro_amsys_temp</span><span class="p">;</span></div><div class='line' id='LC74'><span class="kt">float</span> <span class="n">baro_amsys_p</span><span class="p">;</span></div><div class='line' id='LC75'><span class="kt">float</span> <span class="n">baro_amsys_offset_altitude</span><span class="p">;</span></div><div class='line' id='LC76'><span class="kt">float</span> <span class="n">baro_amsys_abs_altitude</span><span class="p">;</span></div><div class='line' id='LC77'><span class="kt">float</span> <span class="n">ref_alt_init</span><span class="p">;</span> <span class="c1">//Altitude by initialising</span></div><div class='line' id='LC78'><span class="kt">float</span> <span class="n">baro_filter</span><span class="p">;</span></div><div class='line' id='LC79'><span class="kt">float</span> <span class="n">baro_old</span><span class="p">;</span></div><div class='line' id='LC80'><br/></div><div class='line' id='LC81'><span class="c1">//float baro_amsys_r;</span></div><div class='line' id='LC82'><span class="c1">//float baro_amsys_sigma2;</span></div><div class='line' id='LC83'><br/></div><div class='line' id='LC84'><br/></div><div class='line' id='LC85'><span class="k">struct</span> <span class="n">i2c_transaction</span> <span class="n">baro_amsys_i2c_trans</span><span class="p">;</span></div><div class='line' id='LC86'><br/></div><div class='line' id='LC87'><span class="c1">// Local variables</span></div><div class='line' id='LC88'><span class="n">bool_t</span> <span class="n">baro_amsys_offset_init</span><span class="p">;</span></div><div class='line' id='LC89'><span class="kt">double</span> <span class="n">baro_amsys_offset_tmp</span><span class="p">;</span></div><div class='line' id='LC90'><span class="kt">uint16_t</span> <span class="n">baro_amsys_cnt</span><span class="p">;</span></div><div class='line' id='LC91'><br/></div><div class='line' id='LC92'><span class="kt">void</span> <span class="nf">baro_amsys_init</span><span class="p">(</span> <span class="kt">void</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC93'>	<span class="n">baro_filter</span><span class="o">=</span><span class="n">BARO_FILTER</span><span class="p">;</span></div><div class='line' id='LC94'>	<span class="n">pBaroRaw</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC95'>	<span class="n">tBaroRaw</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC96'>	<span class="n">baro_amsys_altitude</span> <span class="o">=</span> <span class="mf">0.0</span><span class="p">;</span></div><div class='line' id='LC97'>	<span class="n">baro_amsys_p</span><span class="o">=</span><span class="mf">0.0</span><span class="p">;</span></div><div class='line' id='LC98'>	<span class="n">baro_amsys_offset</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC99'>	<span class="n">baro_amsys_offset_tmp</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC100'>	<span class="n">baro_amsys_valid</span> <span class="o">=</span> <span class="n">TRUE</span><span class="p">;</span></div><div class='line' id='LC101'>	<span class="n">baro_amsys_offset_init</span> <span class="o">=</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC102'><span class="c1">// 	baro_amsys_enabled = TRUE;</span></div><div class='line' id='LC103'>	<span class="n">baro_amsys_cnt</span> <span class="o">=</span> <span class="n">BARO_AMSYS_OFFSET_NBSAMPLES_INIT</span> <span class="o">+</span> <span class="n">BARO_AMSYS_OFFSET_NBSAMPLES_AVRG</span><span class="p">;</span></div><div class='line' id='LC104'><span class="c1">//	baro_amsys_r = BARO_AMSYS_R;</span></div><div class='line' id='LC105'><span class="c1">//	baro_amsys_sigma2 = BARO_AMSYS_SIGMA2;</span></div><div class='line' id='LC106'><span class="c1">// 	baro_head=0;</span></div><div class='line' id='LC107'>	<span class="n">ref_alt_init</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC108'>	<span class="n">baro_amsys_i2c_trans</span><span class="p">.</span><span class="n">status</span> <span class="o">=</span> <span class="n">I2CTransDone</span><span class="p">;</span></div><div class='line' id='LC109'><span class="p">}</span></div><div class='line' id='LC110'><br/></div><div class='line' id='LC111'><span class="kt">void</span> <span class="nf">baro_amsys_read_periodic</span><span class="p">(</span> <span class="kt">void</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC112'><span class="cp">  // Initiate next read</span></div><div class='line' id='LC113'><span class="cp">#ifndef SITL</span></div><div class='line' id='LC114'>	<span class="k">if</span> <span class="p">(</span><span class="n">baro_amsys_i2c_trans</span><span class="p">.</span><span class="n">status</span> <span class="o">==</span> <span class="n">I2CTransDone</span><span class="p">){</span></div><div class='line' id='LC115'><span class="cp">#ifndef MEASURE_AMSYS_TEMPERATURE</span></div><div class='line' id='LC116'>	<span class="n">I2CReceive</span><span class="p">(</span><span class="n">BARO_AMSYS_I2C_DEV</span><span class="p">,</span> <span class="n">baro_amsys_i2c_trans</span><span class="p">,</span> <span class="n">BARO_AMSYS_ADDR</span><span class="p">,</span> <span class="mi">2</span><span class="p">);</span></div><div class='line' id='LC117'><span class="cp">#else</span></div><div class='line' id='LC118'>	<span class="n">I2CReceive</span><span class="p">(</span><span class="n">BARO_AMSYS_I2C_DEV</span><span class="p">,</span> <span class="n">baro_amsys_i2c_trans</span><span class="p">,</span> <span class="n">BARO_AMSYS_ADDR</span><span class="p">,</span> <span class="mi">4</span><span class="p">);</span></div><div class='line' id='LC119'><span class="cp">#endif</span></div><div class='line' id='LC120'><br/></div><div class='line' id='LC121'>		<span class="p">}</span></div><div class='line' id='LC122'><span class="cp">#else </span><span class="c1">// SITL</span></div><div class='line' id='LC123'>	<span class="n">pBaroRaw</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC124'>	<span class="n">baro_amsys_altitude</span> <span class="o">=</span> <span class="n">gps_alt</span> <span class="o">/</span> <span class="mf">100.0</span><span class="p">;</span></div><div class='line' id='LC125'>	<span class="n">baro_amsys_valid</span> <span class="o">=</span> <span class="n">TRUE</span><span class="p">;</span></div><div class='line' id='LC126'>	<span class="n">EstimatorSetAlt</span><span class="p">(</span><span class="n">baro_amsys_altitude</span><span class="p">);</span></div><div class='line' id='LC127'><span class="cp">#endif</span></div><div class='line' id='LC128'><span class="p">}</span></div><div class='line' id='LC129'><br/></div><div class='line' id='LC130'><span class="kt">void</span> <span class="nf">baro_amsys_read_event</span><span class="p">(</span> <span class="kt">void</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC131'>	<span class="n">pBaroRaw</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC132'>	<span class="c1">// Get raw altimeter from buffer	</span></div><div class='line' id='LC133'>	<span class="n">pBaroRaw</span> <span class="o">=</span> <span class="p">(</span><span class="n">baro_amsys_i2c_trans</span><span class="p">.</span><span class="n">buf</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span> <span class="o">&lt;&lt;</span> <span class="mi">8</span><span class="p">)</span> <span class="o">|</span> <span class="n">baro_amsys_i2c_trans</span><span class="p">.</span><span class="n">buf</span><span class="p">[</span><span class="mi">1</span><span class="p">];</span></div><div class='line' id='LC134'><span class="cp">#ifdef MEASURE_AMSYS_TEMPERATURE</span></div><div class='line' id='LC135'>	<span class="n">tBaroRaw</span> <span class="o">=</span> <span class="p">(</span><span class="n">baro_amsys_i2c_trans</span><span class="p">.</span><span class="n">buf</span><span class="p">[</span><span class="mi">2</span><span class="p">]</span> <span class="o">&lt;&lt;</span> <span class="mi">8</span><span class="p">)</span> <span class="o">|</span> <span class="n">baro_amsys_i2c_trans</span><span class="p">.</span><span class="n">buf</span><span class="p">[</span><span class="mi">3</span><span class="p">];</span></div><div class='line' id='LC136'>	<span class="n">baro_amsys_temp</span> <span class="o">=</span> <span class="p">(</span><span class="kt">float</span><span class="p">)(</span><span class="n">tBaroRaw</span><span class="o">-</span><span class="n">TEMPERATURE_AMSYS_OFFSET_MIN</span><span class="p">)</span><span class="o">*</span><span class="n">TEMPERATURE_AMSYS_MAX</span><span class="o">/</span><span class="p">(</span><span class="kt">float</span><span class="p">)(</span><span class="n">TEMPERATURE_AMSYS_OFFSET_MAX</span><span class="o">-</span><span class="n">TEMPERATURE_AMSYS_OFFSET_MIN</span><span class="p">)</span><span class="o">+</span><span class="p">(</span><span class="kt">float</span><span class="p">)</span><span class="n">TEMPERATURE_AMSYS_MIN</span><span class="p">;</span></div><div class='line' id='LC137'><span class="cp">#endif</span></div><div class='line' id='LC138'>	<span class="c1">// Check if this is valid altimeter</span></div><div class='line' id='LC139'>	<span class="k">if</span> <span class="p">(</span><span class="n">pBaroRaw</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC140'>		<span class="n">baro_amsys_valid</span> <span class="o">=</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC141'>	<span class="k">else</span></div><div class='line' id='LC142'>		<span class="n">baro_amsys_valid</span> <span class="o">=</span> <span class="n">TRUE</span><span class="p">;</span></div><div class='line' id='LC143'><br/></div><div class='line' id='LC144'><br/></div><div class='line' id='LC145'>	<span class="c1">// Continue only if a new altimeter value was received</span></div><div class='line' id='LC146'>	<span class="c1">//if (baro_amsys_valid &amp;&amp; GpsFixValid()) {</span></div><div class='line' id='LC147'>	<span class="k">if</span> <span class="p">(</span><span class="n">baro_amsys_valid</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC148'>		<span class="c1">//Cut RAW Min and Max</span></div><div class='line' id='LC149'>		<span class="k">if</span> <span class="p">(</span><span class="n">pBaroRaw</span> <span class="o">&lt;</span> <span class="n">BARO_AMSYS_OFFSET_MIN</span><span class="p">)</span></div><div class='line' id='LC150'>			<span class="n">pBaroRaw</span> <span class="o">=</span> <span class="n">BARO_AMSYS_OFFSET_MIN</span><span class="p">;</span></div><div class='line' id='LC151'>		<span class="k">if</span> <span class="p">(</span><span class="n">pBaroRaw</span> <span class="o">&gt;</span> <span class="n">BARO_AMSYS_OFFSET_MAX</span><span class="p">)</span></div><div class='line' id='LC152'>			<span class="n">pBaroRaw</span> <span class="o">=</span> <span class="n">BARO_AMSYS_OFFSET_MAX</span><span class="p">;</span></div><div class='line' id='LC153'><br/></div><div class='line' id='LC154'>		<span class="c1">//Convert to pressure</span></div><div class='line' id='LC155'>		<span class="n">baro_amsys_p</span> <span class="o">=</span> <span class="p">(</span><span class="kt">float</span><span class="p">)(</span><span class="n">pBaroRaw</span><span class="o">-</span><span class="n">BARO_AMSYS_OFFSET_MIN</span><span class="p">)</span><span class="o">*</span><span class="n">BARO_AMSYS_MAX_PRESSURE</span><span class="o">/</span><span class="p">(</span><span class="kt">float</span><span class="p">)(</span><span class="n">BARO_AMSYS_OFFSET_MAX</span><span class="o">-</span><span class="n">BARO_AMSYS_OFFSET_MIN</span><span class="p">);</span></div><div class='line' id='LC156'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">baro_amsys_offset_init</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC157'>			<span class="o">--</span><span class="n">baro_amsys_cnt</span><span class="p">;</span></div><div class='line' id='LC158'>			<span class="c1">// Check if averaging completed</span></div><div class='line' id='LC159'>			<span class="k">if</span> <span class="p">(</span><span class="n">baro_amsys_cnt</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC160'>				<span class="c1">// Calculate average</span></div><div class='line' id='LC161'>				<span class="n">baro_amsys_offset</span> <span class="o">=</span> <span class="p">(</span><span class="kt">float</span><span class="p">)(</span><span class="n">baro_amsys_offset_tmp</span> <span class="o">/</span> <span class="n">BARO_AMSYS_OFFSET_NBSAMPLES_AVRG</span><span class="p">);</span></div><div class='line' id='LC162'>				<span class="n">ref_alt_init</span> <span class="o">=</span> <span class="n">GROUND_ALT</span><span class="p">;</span></div><div class='line' id='LC163'>				<span class="n">baro_amsys_offset_init</span> <span class="o">=</span> <span class="n">TRUE</span><span class="p">;</span></div><div class='line' id='LC164'><br/></div><div class='line' id='LC165'>				<span class="c1">// hight over Sea level at init point</span></div><div class='line' id='LC166'>				<span class="c1">//baro_amsys_offset_altitude = 288.15 / 0.0065 * (1 - pow((baro_amsys_p)/1013.25 , 1/5.255));  </span></div><div class='line' id='LC167'>			<span class="p">}</span></div><div class='line' id='LC168'>			<span class="c1">// Check if averaging needs to continue</span></div><div class='line' id='LC169'>			<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">baro_amsys_cnt</span> <span class="o">&lt;=</span> <span class="n">BARO_AMSYS_OFFSET_NBSAMPLES_AVRG</span><span class="p">)</span></div><div class='line' id='LC170'>				<span class="n">baro_amsys_offset_tmp</span> <span class="o">+=</span> <span class="n">baro_amsys_p</span><span class="p">;</span></div><div class='line' id='LC171'><br/></div><div class='line' id='LC172'>			<span class="n">baro_amsys_altitude</span> <span class="o">=</span> <span class="mf">0.0</span><span class="p">;</span></div><div class='line' id='LC173'><br/></div><div class='line' id='LC174'>		<span class="p">}</span></div><div class='line' id='LC175'>		<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC176'>			<span class="c1">// Lowpassfiltering and convert pressure to altitude</span></div><div class='line' id='LC177'>			<span class="n">baro_amsys_altitude</span> <span class="o">=</span> <span class="n">baro_filter</span> <span class="o">*</span> <span class="n">baro_old</span> <span class="o">+</span> <span class="p">(</span><span class="mi">1</span> <span class="o">-</span> <span class="n">baro_filter</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">baro_amsys_offset</span><span class="o">-</span><span class="n">baro_amsys_p</span><span class="p">)</span><span class="o">/</span><span class="p">(</span><span class="mf">1.2041</span><span class="o">*</span><span class="mf">9.81</span><span class="p">);</span></div><div class='line' id='LC178'>			<span class="n">baro_old</span> <span class="o">=</span> <span class="n">baro_amsys_altitude</span><span class="p">;</span></div><div class='line' id='LC179'><br/></div><div class='line' id='LC180'><br/></div><div class='line' id='LC181'>			<span class="c1">//New value available</span></div><div class='line' id='LC182'>			<span class="c1">//EstimatorSetAlt(baro_amsys_abs_altitude);</span></div><div class='line' id='LC183'>		<span class="p">}</span></div><div class='line' id='LC184'>		<span class="n">baro_amsys_abs_altitude</span><span class="o">=</span><span class="n">baro_amsys_altitude</span><span class="o">+</span><span class="n">ref_alt_init</span><span class="p">;</span></div><div class='line' id='LC185'>	<span class="p">}</span> <span class="cm">/*else {</span></div><div class='line' id='LC186'><span class="cm">		baro_amsys_abs_altitude = 0.0;</span></div><div class='line' id='LC187'><span class="cm">	}*/</span></div><div class='line' id='LC188'><br/></div><div class='line' id='LC189'><br/></div><div class='line' id='LC190'>	<span class="c1">// Transaction has been read</span></div><div class='line' id='LC191'>	<span class="n">baro_amsys_i2c_trans</span><span class="p">.</span><span class="n">status</span> <span class="o">=</span> <span class="n">I2CTransDone</span><span class="p">;</span></div><div class='line' id='LC192'><span class="cp">#ifdef SENSOR_SYNC_SEND</span></div><div class='line' id='LC193'>	<span class="n">DOWNLINK_SEND_AMSYS_BARO</span><span class="p">(</span><span class="n">DefaultChannel</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">pBaroRaw</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">baro_amsys_p</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">baro_amsys_offset</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ref_alt_init</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">baro_amsys_abs_altitude</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">baro_amsys_altitude</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">baro_amsys_temp</span><span class="p">)</span></div><div class='line' id='LC194'><span class="cp">#else</span></div><div class='line' id='LC195'>	<span class="n">RunOnceEvery</span><span class="p">(</span><span class="mi">10</span><span class="p">,</span> <span class="n">DOWNLINK_SEND_AMSYS_BARO</span><span class="p">(</span><span class="n">DefaultChannel</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">pBaroRaw</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">baro_amsys_p</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">baro_amsys_offset</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">ref_alt_init</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">baro_amsys_abs_altitude</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">baro_amsys_altitude</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">baro_amsys_temp</span><span class="p">));</span></div><div class='line' id='LC196'><span class="cp">#endif</span></div><div class='line' id='LC197'><br/></div><div class='line' id='LC198'><span class="p">}</span></div><div class='line' id='LC199'><br/></div></pre></div>
              
            
          </td>
        </tr>
      </table>
    
  </div>


          </div>
        </div>
      </div>
    </div>
  

  </div>


<div class="frame frame-loading" style="display:none;">
  <img src="https://d3nwyuy0nl342s.cloudfront.net/images/modules/ajax/big_spinner_336699.gif" height="32" width="32">
</div>

    </div>
  
      
    </div>

    <div id="footer" class="clearfix">
      <div class="site">
        
          <div class="sponsor">
            <a href="http://www.rackspace.com" class="logo">
              <img alt="Dedicated Server" height="36" src="https://d3nwyuy0nl342s.cloudfront.net/images/modules/footer/rackspace_logo.png?v2" width="38" />
            </a>
            Powered by the <a href="http://www.rackspace.com ">Dedicated
            Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
            Computing</a> of Rackspace Hosting<span>&reg;</span>
          </div>
        

        <ul class="links">
          
            <li class="blog"><a href="https://github.com/blog">Blog</a></li>
            <li><a href="https://github.com/about">About</a></li>
            <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
            <li><a href="https://github.com/training">Training</a></li>
            <li><a href="http://jobs.github.com">Job Board</a></li>
            <li><a href="http://shop.github.com">Shop</a></li>
            <li><a href="http://developer.github.com">API</a></li>
            <li><a href="http://status.github.com">Status</a></li>
          
        </ul>
        <ul class="sosueme">
          <li class="main">&copy; 2011 <span id="_rrt" title="0.24583s from fe3.rs.github.com">GitHub</span> Inc. All rights reserved.</li>
          <li><a href="/site/terms">Terms of Service</a></li>
          <li><a href="/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
        </ul>
      </div>
    </div><!-- /#footer -->

    <script>window._auth_token = "ae54b1c043d2c2b06fc6532c21d1ea3871323e5f"</script>
    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>t</dt>
        <dd>Open tree</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>p</dt>
        <dd>Open parent</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selected down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selected up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle select target</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column middle">
        <dl class="keyboard-mappings">
          <dt>I</dt>
          <dd>Mark selected as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>U</dt>
          <dd>Mark selected as unread</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>e</dt>
          <dd>Close selected</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Remove selected from view</dd>
        </dl>
      </div><!-- /.column.middle -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>
</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:
> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>
    

    <!--[if IE 8]>
    <script type="text/javascript" charset="utf-8">
      $(document.body).addClass("ie8")
    </script>
    <![endif]-->

    <!--[if IE 7]>
    <script type="text/javascript" charset="utf-8">
      $(document.body).addClass("ie7")
    </script>
    <![endif]-->

    
    
    
    <script>(function(){var d=document;var e=d.createElement("script");e.async=true;e.src="https://d1ros97qkrwjf5.cloudfront.net/10/eum/rum.js	";var s=d.getElementsByTagName("script")[0];s.parentNode.insertBefore(e,s);})();NREUMQ.push(["nrf2","beacon-3.newrelic.com","2f94e4d8c2",64799,"dw1bEBZcX1RWRho0B1cJGiMNR3tNUQ4PNANEDWUBFl5aS0BdWggV",0.0,530,new Date().getTime()])</script>
  </body>
</html>

