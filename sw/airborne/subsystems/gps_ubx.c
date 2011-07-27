
    

  

<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
    <script type="text/javascript">var NREUMQ=[];NREUMQ.push(["mark","firstbyte",new Date().getTime()]);</script>
        <title>sw/airborne/subsystems/gps/gps_ubx.c at master from paparazzi/paparazzi - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />

    <link href="https://gs1.wac.edgecastcdn.net/80460E/assets/453b65459b4bef8c01a7e8bdf3ac966cf3604a5d/stylesheets/bundle_github.css" media="screen" rel="stylesheet" type="text/css" />
    

    <script type="text/javascript">
      if (typeof console == "undefined" || typeof console.log == "undefined")
        console = { log: function() {} }
    </script>
    <script type="text/javascript" charset="utf-8">
      var GitHub = {
        assetHost: 'https://gs1.wac.edgecastcdn.net/80460E/assets'
      }
      var github_user = null
      
    </script>
    <script src="https://gs1.wac.edgecastcdn.net/80460E/assets/javascripts/jquery/jquery-1.6.1.min.js" type="text/javascript"></script>
    <script src="https://gs1.wac.edgecastcdn.net/80460E/assets/9a8d4d0be567a85129ca26f93f40eb76dcc8bfbb/javascripts/bundle_github.js" type="text/javascript"></script>


    
    <script type="text/javascript" charset="utf-8">
      GitHub.spy({
        repo: "paparazzi/paparazzi"
      })
    </script>

    
  <link rel='canonical' href='/paparazzi/paparazzi/blob/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne/subsystems/gps/gps_ubx.c'>

  <link href="https://github.com/paparazzi/paparazzi/commits/master.atom" rel="alternate" title="Recent Commits to paparazzi:master" type="application/atom+xml" />

        <meta name="description" content="paparazzi - Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository." />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "paparazzi/paparazzi";
      GitHub.currentRef = 'master';
      GitHub.commitSHA = "8237283b4bc6380dee1591f872ca442a86bd52af";
      GitHub.currentPath = 'sw/airborne/subsystems/gps/gps_ubx.c';
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

  

  <body class="logged_out page-blob linux env-production">
    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="true">
          <a class="logo boring" href="https://github.com">
            
            <img alt="github" class="default" height="45" src="https://gs1.wac.edgecastcdn.net/80460E/assets/images/modules/header/logov6.png" />
            <!--[if (gt IE 8)|!(IE)]><!-->
            <img alt="github" class="hover" height="45" src="https://gs1.wac.edgecastcdn.net/80460E/assets/images/modules/header/logov6-hover.png" />
            <!--<![endif]-->
          </a>
       
        
        <div class="topsearch">
  
    <ul class="nav logged_out">
      
      <li class="pricing"><a href="/plans">Pricing and Signup</a></li>
      
      <li class="explore"><a href="/explore">Explore GitHub</a></li>
      <li class="features"><a href="/features">Features</a></li>
      
      <li class="blog"><a href="/blog">Blog</a></li>
      
      <li class="login"><a href="/login?return_to=%2Fpaparazzi%2Fpaparazzi%2Fblob%2Fmaster%2Fsw%2Fairborne%2Fsubsystems%2Fgps%2Fgps_ubx.c">Login</a></li>
    </ul>
  
</div>

      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public    instapaper_ignore readability-menu">

      

      <div class="title-actions-bar">
        <h1>
          <a href="/paparazzi">paparazzi</a> / <strong><a href="/paparazzi/paparazzi">paparazzi</a></strong>
          
          
        </h1>

        
    <ul class="actions">
      

      
        <li class="for-owner" style="display:none"><a href="/paparazzi/paparazzi/admin" class="minibutton btn-admin "><span><span class="icon"></span>Admin</span></a></li>
        <li>
          <a href="/paparazzi/paparazzi/toggle_watch" class="minibutton btn-watch " id="watch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'efb8f9d13c7d576e742c952b97c16e084ce72294'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Watch</span></a>
          <a href="/paparazzi/paparazzi/toggle_watch" class="minibutton btn-watch " id="unwatch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'efb8f9d13c7d576e742c952b97c16e084ce72294'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Unwatch</span></a>
        </li>
        
          
            <li class="for-notforked" style="display:none"><a href="/paparazzi/paparazzi/fork" class="minibutton btn-fork " id="fork_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'efb8f9d13c7d576e742c952b97c16e084ce72294'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Fork</span></a></li>
            <li class="for-hasfork" style="display:none"><a href="#" class="minibutton btn-fork " id="your_fork_button"><span><span class="icon"></span>Your Fork</span></a></li>
          

          
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers"><a href="/paparazzi/paparazzi/watchers" title="Watchers" class="tooltipped downwards">82</a></li>
          <li class="forks"><a href="/paparazzi/paparazzi/network" title="Forks" class="tooltipped downwards">63</a></li>
        </ul>
      </li>
    </ul>

      </div>

        
  <ul class="tabs">
    <li><a href="/paparazzi/paparazzi" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="/paparazzi/paparazzi/commits/master" highlight="repo_commits">Commits</a></li>
    <li><a href="/paparazzi/paparazzi/network" highlight="repo_network">Network</a></li>
    <li><a href="/paparazzi/paparazzi/pulls" highlight="repo_pulls">Pull Requests (0)</a></li>

    

    
      
      <li><a href="/paparazzi/paparazzi/issues" highlight="issues">Issues (18)</a></li>
    

            
    <li><a href="/paparazzi/paparazzi/graphs" highlight="repo_graphs">Graphs</a></li>

    

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
      <a href="/paparazzi/paparazzi/branches" class="dropdown">Switch Branches (7)</a>
      <ul>
        
          
          
            <li><a href="/paparazzi/paparazzi/blob/HB/sw/airborne/subsystems/gps/gps_ubx.c" data-name="HB">HB</a></li>
          
        
          
          
            <li><a href="/paparazzi/paparazzi/blob/cam/sw/airborne/subsystems/gps/gps_ubx.c" data-name="cam">cam</a></li>
          
        
          
          
            <li><a href="/paparazzi/paparazzi/blob/campaign2010/sw/airborne/subsystems/gps/gps_ubx.c" data-name="campaign2010">campaign2010</a></li>
          
        
          
          
            <li><a href="/paparazzi/paparazzi/blob/dev/sw/airborne/subsystems/gps/gps_ubx.c" data-name="dev">dev</a></li>
          
        
          
            <li><strong>master &#x2713;</strong></li>
            
          
          
            <li><a href="/paparazzi/paparazzi/blob/new-state-interface/sw/airborne/subsystems/gps/gps_ubx.c" data-name="new-state-interface">new-state-interface</a></li>
          
        
          
          
            <li><a href="/paparazzi/paparazzi/blob/pfd/sw/airborne/subsystems/gps/gps_ubx.c" data-name="pfd">pfd</a></li>
          
        
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown ">Switch Tags (2)</a>
              <ul>
                      
              <li><a href="/paparazzi/paparazzi/blob/FwYapaXSens/sw/airborne/subsystems/gps/gps_ubx.c" data-name="FwYapaXSens">FwYapaXSens</a></li>
            
                      
              <li><a href="/paparazzi/paparazzi/blob/FwCHIMU/sw/airborne/subsystems/gps/gps_ubx.c" data-name="FwCHIMU">FwCHIMU</a></li>
            
                  </ul>
      
    </li>
    <li>
    
    <a href="/paparazzi/paparazzi/branches" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  
  



        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

      
        <a href="/paparazzi/paparazzi/downloads" class="download-source" id="download_button" title="Download source, tagged packages and binaries."><span class="icon"></span>Downloads</a>
      

      <div id="repository_desc_wrapper">
      <div id="repository_description" rel="repository_description_edit">
        
          <p>Paparazzi is a free and open-source hardware and software project for unmanned (air) vehicles. This is the main software repository.
            <span id="read_more" style="display:none">&mdash; <a href="#readme">Read more</a></span>
          </p>
        
      </div>

      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/paparazzi/paparazzi/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="efb8f9d13c7d576e742c952b97c16e084ce72294" /></div>
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
        <form action="/paparazzi/paparazzi/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="efb8f9d13c7d576e742c952b97c16e084ce72294" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="http://paparazzi.enac.fr">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>
      </div>
      <div class="rule "></div>
      <div class="url-box">
  

  <ul class="clone-urls">
    
      
      <li class="http_clone_url"><a href="https://github.com/paparazzi/paparazzi.git" data-permissions="Read-Only">HTTP</a></li>
      <li class="public_clone_url"><a href="git://github.com/paparazzi/paparazzi.git" data-permissions="Read-Only">Git Read-Only</a></li>
    
    
  </ul>
  <input type="text" spellcheck="false" class="url-field" />
        <span style="display:none" id="clippy_2090" class="url-box-clippy"></span>
      <span id="clippy_tooltip_clippy_2090" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://gs1.wac.edgecastcdn.net/80460E/assets/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_2090&amp;copied=&amp;copyto=">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://gs1.wac.edgecastcdn.net/80460E/assets/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_2090&amp;copied=&amp;copyto="
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

  <p class="url-description"><strong>Read+Write</strong> access</p>
</div>

    </div>

    <div class="frame frame-center tree-finder" style="display:none">
      <div class="breadcrumb">
        <b><a href="/paparazzi/paparazzi">paparazzi</a></b> /
        <input class="tree-finder-input" type="text" name="query" autocomplete="off" spellcheck="false">
      </div>

      
        <div class="octotip">
          <p>
            <a href="/paparazzi/paparazzi/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever">Dismiss</a>
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
  GitHub.downloadRepo = '/paparazzi/paparazzi/archives/master'
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
      
        <div class="message"><pre><a href="/paparazzi/paparazzi/commit/8237283b4bc6380dee1591f872ca442a86bd52af">fix gps callback trigger</a> </pre></div>
      

      <div class="actor">
        <div class="gravatar">
          
          <img src="https://secure.gravatar.com/avatar/63fafa0c91fcc9585572c812c9c6b0ef?s=140&d=https://gs1.wac.edgecastcdn.net/80460E/assets%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="30" height="30"  />
        </div>
        <div class="name"><a href="/gautierhattenberger">gautierhattenberger</a> <span>(author)</span></div>
        <div class="date">
          <time class="js-relative-date" datetime="2011-07-06T06:54:03-07:00" title="2011-07-06 06:54:03">July 06, 2011</time>
        </div>
      </div>

      

    </div>
    <div class="machine">
      <span>c</span>ommit&nbsp;&nbsp;<a href="/paparazzi/paparazzi/commit/8237283b4bc6380dee1591f872ca442a86bd52af" class="js-commit-link" data-key="c">8237283b4bc6380dee15</a><br />
      <span>t</span>ree&nbsp;&nbsp;&nbsp;&nbsp;<a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne/subsystems" class="js-tree-link" data-key="t">cbf866cb8d15fed87098</a><br />
      
        <span>p</span>arent&nbsp;
        
        <a href="/paparazzi/paparazzi/tree/d6ad10013856056a0ebba3e9913b4339064ec356/sw/airborne/subsystems" class="js-parent-link" data-key="p">d6ad10013856056a0ebb</a>
      

    </div>
  </div>

    </div>
  </div>



  <div id="slider">

  

    <div class="breadcrumb" data-path="sw/airborne/subsystems/gps/gps_ubx.c/">
      <b><a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af">paparazzi</a></b> / <a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af/sw">sw</a> / <a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne">airborne</a> / <a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne/subsystems">subsystems</a> / <a href="/paparazzi/paparazzi/tree/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne/subsystems/gps">gps</a> / gps_ubx.c       <span style="display:none" id="clippy_1781" class="clippy">sw/airborne/subsystems/gps/gps_ubx.c</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://gs1.wac.edgecastcdn.net/80460E/assets/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_1781&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://gs1.wac.edgecastcdn.net/80460E/assets/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_1781&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="sw/airborne/subsystems/gps/gps_ubx.c/" data-canonical-url="/paparazzi/paparazzi/blob/8237283b4bc6380dee1591f872ca442a86bd52af/sw/airborne/subsystems/gps/gps_ubx.c">
        
          <ul class="big-actions">
            
            <li><a class="file-edit-link minibutton" href="/paparazzi/paparazzi/edit/__current_ref__/sw/airborne/subsystems/gps/gps_ubx.c"><span>Edit this file</span></a></li>
          </ul>
        

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://gs1.wac.edgecastcdn.net/80460E/assets/images/icons/txt.png" width="16" /></span>
                <span class="mode" title="File Mode">100644</span>
                
                  <span>395 lines (357 sloc)</span>
                
                <span>12.589 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/paparazzi/paparazzi/raw/master/sw/airborne/subsystems/gps/gps_ubx.c" id="raw-url">raw</a></li>
                
                  <li><a href="/paparazzi/paparazzi/blame/master/sw/airborne/subsystems/gps/gps_ubx.c">blame</a></li>
                
                <li><a href="/paparazzi/paparazzi/commits/master/sw/airborne/subsystems/gps/gps_ubx.c">history</a></li>
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
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
</pre>
          </td>
          <td width="100%">
            
              
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * Copyright (C) 2010 Antoine Drouin &lt;poinix@gmail.com&gt;</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * This file is part of paparazzi.</span></div><div class='line' id='LC5'><span class="cm"> *</span></div><div class='line' id='LC6'><span class="cm"> * paparazzi is free software; you can redistribute it and/or modify</span></div><div class='line' id='LC7'><span class="cm"> * it under the terms of the GNU General Public License as published by</span></div><div class='line' id='LC8'><span class="cm"> * the Free Software Foundation; either version 2, or (at your option)</span></div><div class='line' id='LC9'><span class="cm"> * any later version.</span></div><div class='line' id='LC10'><span class="cm"> *</span></div><div class='line' id='LC11'><span class="cm"> * paparazzi is distributed in the hope that it will be useful,</span></div><div class='line' id='LC12'><span class="cm"> * but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC13'><span class="cm"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC14'><span class="cm"> * GNU General Public License for more details.</span></div><div class='line' id='LC15'><span class="cm"> *</span></div><div class='line' id='LC16'><span class="cm"> * You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC17'><span class="cm"> * along with paparazzi; see the file COPYING.  If not, write to</span></div><div class='line' id='LC18'><span class="cm"> * the Free Software Foundation, 59 Temple Place - Suite 330,</span></div><div class='line' id='LC19'><span class="cm"> * Boston, MA 02111-1307, USA.</span></div><div class='line' id='LC20'><span class="cm"> */</span></div><div class='line' id='LC21'><br/></div><div class='line' id='LC22'><br/></div><div class='line' id='LC23'><span class="cp">#include &quot;subsystems/gps.h&quot;</span></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><span class="cp">#include &quot;led.h&quot;</span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="cp">#ifdef GPS_USE_LATLONG</span></div><div class='line' id='LC28'><span class="cp">#include &quot;subsystems/nav.h&quot;</span></div><div class='line' id='LC29'><span class="cp">#include &quot;math/pprz_geodetic_float.h&quot;</span></div><div class='line' id='LC30'><span class="cp">#endif</span></div><div class='line' id='LC31'><br/></div><div class='line' id='LC32'><span class="cp">/* parser status */</span></div><div class='line' id='LC33'><span class="cp">#define UNINIT        0</span></div><div class='line' id='LC34'><span class="cp">#define GOT_SYNC1     1</span></div><div class='line' id='LC35'><span class="cp">#define GOT_SYNC2     2</span></div><div class='line' id='LC36'><span class="cp">#define GOT_CLASS     3</span></div><div class='line' id='LC37'><span class="cp">#define GOT_ID        4</span></div><div class='line' id='LC38'><span class="cp">#define GOT_LEN1      5</span></div><div class='line' id='LC39'><span class="cp">#define GOT_LEN2      6</span></div><div class='line' id='LC40'><span class="cp">#define GOT_PAYLOAD   7</span></div><div class='line' id='LC41'><span class="cp">#define GOT_CHECKSUM1 8</span></div><div class='line' id='LC42'><br/></div><div class='line' id='LC43'><span class="cp">/* last error type */</span></div><div class='line' id='LC44'><span class="cp">#define GPS_UBX_ERR_NONE         0</span></div><div class='line' id='LC45'><span class="cp">#define GPS_UBX_ERR_OVERRUN      1</span></div><div class='line' id='LC46'><span class="cp">#define GPS_UBX_ERR_MSG_TOO_LONG 2</span></div><div class='line' id='LC47'><span class="cp">#define GPS_UBX_ERR_CHECKSUM     3</span></div><div class='line' id='LC48'><span class="cp">#define GPS_UBX_ERR_UNEXPECTED   4</span></div><div class='line' id='LC49'><span class="cp">#define GPS_UBX_ERR_OUT_OF_SYNC  5</span></div><div class='line' id='LC50'><br/></div><div class='line' id='LC51'><span class="cp">#define UTM_HEM_NORTH 0</span></div><div class='line' id='LC52'><span class="cp">#define UTM_HEM_SOUTH 1</span></div><div class='line' id='LC53'><br/></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><span class="cp">#define GpsUartSend1(c) GpsLink(Transmit(c))</span></div><div class='line' id='LC56'><span class="cp">#define GpsUartInitParam(_a,_b,_c) GpsLink(InitParam(_a,_b,_c))</span></div><div class='line' id='LC57'><span class="cp">#define GpsUartRunning GpsLink(TxRunning)</span></div><div class='line' id='LC58'><span class="cp">#define GpsUartSendMessage GpsLink(SendMessage)</span></div><div class='line' id='LC59'><br/></div><div class='line' id='LC60'><span class="cp">#define UbxInitCheksum() { gps_ubx.send_ck_a = gps_ubx.send_ck_b = 0; }</span></div><div class='line' id='LC61'><span class="cp">#define UpdateChecksum(c) { gps_ubx.send_ck_a += c; gps_ubx.send_ck_b += gps_ubx.send_ck_a; }</span></div><div class='line' id='LC62'><span class="cp">#define UbxTrailer() { GpsUartSend1(gps_ubx.send_ck_a);  GpsUartSend1(gps_ubx.send_ck_b); GpsUartSendMessage(); }</span></div><div class='line' id='LC63'><br/></div><div class='line' id='LC64'><span class="cp">#define UbxSend1(c) { uint8_t i8=c; GpsUartSend1(i8); UpdateChecksum(i8); }</span></div><div class='line' id='LC65'><span class="cp">#define UbxSend2(c) { uint16_t i16=c; UbxSend1(i16&amp;0xff); UbxSend1(i16 &gt;&gt; 8); }</span></div><div class='line' id='LC66'><span class="cp">#define UbxSend1ByAddr(x) { UbxSend1(*x); }</span></div><div class='line' id='LC67'><span class="cp">#define UbxSend2ByAddr(x) { UbxSend1(*x); UbxSend1(*(x+1)); }</span></div><div class='line' id='LC68'><span class="cp">#define UbxSend4ByAddr(x) { UbxSend1(*x); UbxSend1(*(x+1)); UbxSend1(*(x+2)); UbxSend1(*(x+3)); }</span></div><div class='line' id='LC69'><br/></div><div class='line' id='LC70'><span class="cp">#define UbxHeader(nav_id, msg_id, len) {        \</span></div><div class='line' id='LC71'><span class="cp">    GpsUartSend1(UBX_SYNC1);                    \</span></div><div class='line' id='LC72'><span class="cp">    GpsUartSend1(UBX_SYNC2);                    \</span></div><div class='line' id='LC73'><span class="cp">    UbxInitCheksum();                           \</span></div><div class='line' id='LC74'><span class="cp">    UbxSend1(nav_id);                           \</span></div><div class='line' id='LC75'><span class="cp">    UbxSend1(msg_id);                           \</span></div><div class='line' id='LC76'><span class="cp">    UbxSend2(len);                              \</span></div><div class='line' id='LC77'><span class="cp">  }</span></div><div class='line' id='LC78'><br/></div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'><span class="k">struct</span> <span class="n">GpsUbx</span> <span class="n">gps_ubx</span><span class="p">;</span></div><div class='line' id='LC81'><br/></div><div class='line' id='LC82'><span class="cp">#ifdef GPS_CONFIGURE</span></div><div class='line' id='LC83'><span class="n">bool_t</span> <span class="n">gps_configuring</span><span class="p">;</span></div><div class='line' id='LC84'><span class="k">static</span> <span class="kt">uint8_t</span> <span class="n">gps_status_config</span><span class="p">;</span></div><div class='line' id='LC85'><span class="cp">#endif</span></div><div class='line' id='LC86'><br/></div><div class='line' id='LC87'><span class="kt">void</span> <span class="nf">gps_impl_init</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC88'>&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span> <span class="o">=</span> <span class="n">UNINIT</span><span class="p">;</span></div><div class='line' id='LC89'>&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_available</span> <span class="o">=</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC90'>&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">error_cnt</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">error_last</span> <span class="o">=</span> <span class="n">GPS_UBX_ERR_NONE</span><span class="p">;</span></div><div class='line' id='LC92'><span class="cp">#ifdef GPS_CONFIGURE</span></div><div class='line' id='LC93'>&nbsp;&nbsp;&nbsp;<span class="n">gps_status_config</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC94'>&nbsp;&nbsp;&nbsp;<span class="n">gps_configuring</span> <span class="o">=</span> <span class="n">TRUE</span><span class="p">;</span></div><div class='line' id='LC95'><span class="cp">#endif</span></div><div class='line' id='LC96'><span class="p">}</span></div><div class='line' id='LC97'><br/></div><div class='line' id='LC98'><br/></div><div class='line' id='LC99'><span class="kt">void</span> <span class="nf">gps_ubx_read_message</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC100'><br/></div><div class='line' id='LC101'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_class</span> <span class="o">==</span> <span class="n">UBX_NAV_ID</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC102'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_id</span> <span class="o">==</span> <span class="n">UBX_NAV_SOL_ID</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC103'><span class="cp">#ifdef GPS_TIMESTAMP</span></div><div class='line' id='LC104'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* get hardware clock ticks */</span></div><div class='line' id='LC105'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">SysTimeTimerStart</span><span class="p">(</span><span class="n">gps</span><span class="p">.</span><span class="n">t0</span><span class="p">);</span></div><div class='line' id='LC106'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">t0_tow</span>        <span class="o">=</span> <span class="n">UBX_NAV_SOL_ITOW</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC107'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">t0_tow_frac</span>   <span class="o">=</span> <span class="n">UBX_NAV_SOL_Frac</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC108'><span class="cp">#endif</span></div><div class='line' id='LC109'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">tow</span>        <span class="o">=</span> <span class="n">UBX_NAV_SOL_ITOW</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC110'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">week</span>       <span class="o">=</span> <span class="n">UBX_NAV_SOL_week</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC111'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">fix</span>        <span class="o">=</span> <span class="n">UBX_NAV_SOL_GPSfix</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC112'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">ecef_pos</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="n">UBX_NAV_SOL_ECEF_X</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC113'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">ecef_pos</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="n">UBX_NAV_SOL_ECEF_Y</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC114'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">ecef_pos</span><span class="p">.</span><span class="n">z</span> <span class="o">=</span> <span class="n">UBX_NAV_SOL_ECEF_Z</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC115'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">pacc</span>       <span class="o">=</span> <span class="n">UBX_NAV_SOL_Pacc</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC116'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">ecef_vel</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="n">UBX_NAV_SOL_ECEFVX</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC117'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">ecef_vel</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="n">UBX_NAV_SOL_ECEFVY</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC118'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">ecef_vel</span><span class="p">.</span><span class="n">z</span> <span class="o">=</span> <span class="n">UBX_NAV_SOL_ECEFVZ</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC119'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">sacc</span>       <span class="o">=</span> <span class="n">UBX_NAV_SOL_Sacc</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC120'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">pdop</span>       <span class="o">=</span> <span class="n">UBX_NAV_SOL_PDOP</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC121'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">num_sv</span>     <span class="o">=</span> <span class="n">UBX_NAV_SOL_numSV</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC122'><span class="cp">#ifdef GPS_LED</span></div><div class='line' id='LC123'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">gps</span><span class="p">.</span><span class="n">fix</span> <span class="o">==</span> <span class="n">GPS_FIX_3D</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">LED_ON</span><span class="p">(</span><span class="n">GPS_LED</span><span class="p">);</span></div><div class='line' id='LC125'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC126'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC127'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">LED_TOGGLE</span><span class="p">(</span><span class="n">GPS_LED</span><span class="p">);</span></div><div class='line' id='LC128'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC129'><span class="cp">#endif</span></div><div class='line' id='LC130'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_id</span> <span class="o">==</span> <span class="n">UBX_NAV_POSLLH_ID</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC131'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">lla_pos</span><span class="p">.</span><span class="n">lat</span> <span class="o">=</span> <span class="n">RadOfDeg</span><span class="p">(</span><span class="n">UBX_NAV_POSLLH_LAT</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">));</span></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">lla_pos</span><span class="p">.</span><span class="n">lon</span> <span class="o">=</span> <span class="n">RadOfDeg</span><span class="p">(</span><span class="n">UBX_NAV_POSLLH_LON</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">));</span></div><div class='line' id='LC133'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">lla_pos</span><span class="p">.</span><span class="n">alt</span> <span class="o">=</span> <span class="n">UBX_NAV_POSLLH_HEIGHT</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC134'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">hmsl</span>        <span class="o">=</span> <span class="n">UBX_NAV_POSLLH_HMSL</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC135'><span class="cp">#ifdef GPS_USE_LATLONG</span></div><div class='line' id='LC136'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* Computes from (lat, long) in the referenced UTM zone */</span></div><div class='line' id='LC137'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">LlaCoor_f</span> <span class="n">lla_f</span><span class="p">;</span></div><div class='line' id='LC138'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">lla_f</span><span class="p">.</span><span class="n">lat</span> <span class="o">=</span> <span class="p">((</span><span class="kt">float</span><span class="p">)</span> <span class="n">gps</span><span class="p">.</span><span class="n">lla_pos</span><span class="p">.</span><span class="n">lat</span><span class="p">)</span> <span class="o">/</span> <span class="mf">1e7</span><span class="p">;</span></div><div class='line' id='LC139'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">lla_f</span><span class="p">.</span><span class="n">lon</span> <span class="o">=</span> <span class="p">((</span><span class="kt">float</span><span class="p">)</span> <span class="n">gps</span><span class="p">.</span><span class="n">lla_pos</span><span class="p">.</span><span class="n">lon</span><span class="p">)</span> <span class="o">/</span> <span class="mf">1e7</span><span class="p">;</span></div><div class='line' id='LC140'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">UtmCoor_f</span> <span class="n">utm_f</span><span class="p">;</span></div><div class='line' id='LC141'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">utm_f</span><span class="p">.</span><span class="n">zone</span> <span class="o">=</span> <span class="n">nav_utm_zone0</span><span class="p">;</span></div><div class='line' id='LC142'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* convert to utm */</span></div><div class='line' id='LC143'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">utm_of_lla_f</span><span class="p">(</span><span class="o">&amp;</span><span class="n">utm_f</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">lla_f</span><span class="p">);</span></div><div class='line' id='LC144'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* copy results of utm conversion */</span></div><div class='line' id='LC145'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">east</span> <span class="o">=</span> <span class="n">utm_f</span><span class="p">.</span><span class="n">east</span><span class="o">*</span><span class="mi">100</span><span class="p">;</span></div><div class='line' id='LC146'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">north</span> <span class="o">=</span> <span class="n">utm_f</span><span class="p">.</span><span class="n">north</span><span class="o">*</span><span class="mi">100</span><span class="p">;</span></div><div class='line' id='LC147'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">alt</span> <span class="o">=</span> <span class="n">utm_f</span><span class="p">.</span><span class="n">alt</span><span class="o">*</span><span class="mi">1000</span><span class="p">;</span></div><div class='line' id='LC148'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">zone</span> <span class="o">=</span> <span class="n">nav_utm_zone0</span><span class="p">;</span></div><div class='line' id='LC149'><span class="cp">#else</span></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC151'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_id</span> <span class="o">==</span> <span class="n">UBX_NAV_POSUTM_ID</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC152'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">east</span> <span class="o">=</span> <span class="n">UBX_NAV_POSUTM_EAST</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC153'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">north</span> <span class="o">=</span> <span class="n">UBX_NAV_POSUTM_NORTH</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC154'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">uint8_t</span> <span class="n">hem</span> <span class="o">=</span> <span class="n">UBX_NAV_POSUTM_HEM</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC155'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">hem</span> <span class="o">==</span> <span class="n">UTM_HEM_SOUTH</span><span class="p">)</span></div><div class='line' id='LC156'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">north</span> <span class="o">-=</span> <span class="mi">1000000000</span><span class="p">;</span> <span class="cm">/* Subtract false northing: -10000km */</span></div><div class='line' id='LC157'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">alt</span> <span class="o">=</span> <span class="n">UBX_NAV_POSUTM_ALT</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">)</span><span class="o">*</span><span class="mi">10</span><span class="p">;</span></div><div class='line' id='LC158'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">hmsl</span> <span class="o">=</span> <span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">alt</span><span class="p">;</span></div><div class='line' id='LC159'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">lla_pos</span><span class="p">.</span><span class="n">alt</span> <span class="o">=</span> <span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">alt</span><span class="p">;</span> <span class="c1">// FIXME: with UTM only you do not receive ellipsoid altitude</span></div><div class='line' id='LC160'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">utm_pos</span><span class="p">.</span><span class="n">zone</span> <span class="o">=</span> <span class="n">UBX_NAV_POSUTM_ZONE</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC161'><span class="cp">#endif</span></div><div class='line' id='LC162'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC163'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_id</span> <span class="o">==</span> <span class="n">UBX_NAV_VELNED_ID</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC164'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">speed_3d</span> <span class="o">=</span> <span class="n">UBX_NAV_VELNED_Speed</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC165'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">gspeed</span> <span class="o">=</span> <span class="n">UBX_NAV_VELNED_GSpeed</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC166'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">ned_vel</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="n">UBX_NAV_VELNED_VEL_N</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC167'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">ned_vel</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="n">UBX_NAV_VELNED_VEL_E</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC168'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">ned_vel</span><span class="p">.</span><span class="n">z</span> <span class="o">=</span> <span class="n">UBX_NAV_VELNED_VEL_D</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC169'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Ublox gives I4 heading in 1e-5 degrees, apparenty from 0 to 360 degrees (not -180 to 180)</span></div><div class='line' id='LC170'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// I4 max = 2^31 = 214 * 1e5 * 100 &lt; 360 * 1e7: overflow on angles over 214 deg -&gt; casted to -214 deg </span></div><div class='line' id='LC171'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// solution: First to radians, and then scale to 1e-7 radians</span></div><div class='line' id='LC172'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// First x 10 for loosing less resolution, then to radians, then multiply x 10 again</span></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">course</span> <span class="o">=</span> <span class="p">(</span><span class="n">RadOfDeg</span><span class="p">(</span><span class="n">UBX_NAV_VELNED_Heading</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">)</span><span class="o">*</span><span class="mi">10</span><span class="p">))</span> <span class="o">*</span> <span class="mi">10</span><span class="p">;</span> </div><div class='line' id='LC174'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">tow</span> <span class="o">=</span> <span class="n">UBX_NAV_VELNED_ITOW</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC175'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC176'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_id</span> <span class="o">==</span> <span class="n">UBX_NAV_SVINFO_ID</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC177'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">nb_channels</span> <span class="o">=</span> <span class="n">Min</span><span class="p">(</span><span class="n">UBX_NAV_SVINFO_NCH</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">),</span> <span class="n">GPS_NB_CHANNELS</span><span class="p">);</span></div><div class='line' id='LC178'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">uint8_t</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC179'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">gps</span><span class="p">.</span><span class="n">nb_channels</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC180'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">svinfos</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">svid</span> <span class="o">=</span> <span class="n">UBX_NAV_SVINFO_SVID</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">svinfos</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">flags</span> <span class="o">=</span> <span class="n">UBX_NAV_SVINFO_Flags</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC182'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">svinfos</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">qi</span> <span class="o">=</span> <span class="n">UBX_NAV_SVINFO_QI</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">svinfos</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">cno</span> <span class="o">=</span> <span class="n">UBX_NAV_SVINFO_CNO</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC184'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">svinfos</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">elev</span> <span class="o">=</span> <span class="n">UBX_NAV_SVINFO_Elev</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC185'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">svinfos</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">azim</span> <span class="o">=</span> <span class="n">UBX_NAV_SVINFO_Azim</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC186'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC187'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC188'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_id</span> <span class="o">==</span> <span class="n">UBX_NAV_STATUS_ID</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC189'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps</span><span class="p">.</span><span class="n">fix</span> <span class="o">=</span> <span class="n">UBX_NAV_STATUS_GPSfix</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC190'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status_flags</span> <span class="o">=</span> <span class="n">UBX_NAV_STATUS_Flags</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC191'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">sol_flags</span> <span class="o">=</span> <span class="n">UBX_NAV_SOL_Flags</span><span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">);</span></div><div class='line' id='LC192'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC193'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC194'><span class="p">}</span></div><div class='line' id='LC195'><br/></div><div class='line' id='LC196'><br/></div><div class='line' id='LC197'><span class="cm">/* UBX parsing */</span></div><div class='line' id='LC198'><span class="kt">void</span> <span class="nf">gps_ubx_parse</span><span class="p">(</span> <span class="kt">uint8_t</span> <span class="n">c</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC199'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span> <span class="o">&lt;</span> <span class="n">GOT_PAYLOAD</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC200'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">ck_a</span> <span class="o">+=</span> <span class="n">c</span><span class="p">;</span></div><div class='line' id='LC201'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">ck_b</span> <span class="o">+=</span> <span class="n">gps_ubx</span><span class="p">.</span><span class="n">ck_a</span><span class="p">;</span></div><div class='line' id='LC202'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC203'>&nbsp;&nbsp;<span class="k">switch</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC204'>&nbsp;&nbsp;<span class="k">case</span> <span class="n">UNINIT</span>:</div><div class='line' id='LC205'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">c</span> <span class="o">==</span> <span class="n">UBX_SYNC1</span><span class="p">)</span></div><div class='line' id='LC206'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC207'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC208'>&nbsp;&nbsp;<span class="k">case</span> <span class="n">GOT_SYNC1</span>:</div><div class='line' id='LC209'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">c</span> <span class="o">!=</span> <span class="n">UBX_SYNC2</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC210'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">error_last</span> <span class="o">=</span> <span class="n">GPS_UBX_ERR_OUT_OF_SYNC</span><span class="p">;</span></div><div class='line' id='LC211'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">goto</span> <span class="n">error</span><span class="p">;</span></div><div class='line' id='LC212'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC213'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">ck_a</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC214'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">ck_b</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC215'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC216'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC217'>&nbsp;&nbsp;<span class="k">case</span> <span class="n">GOT_SYNC2</span>:</div><div class='line' id='LC218'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_available</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC219'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* Previous message has not yet been parsed: discard this one */</span></div><div class='line' id='LC220'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">error_last</span> <span class="o">=</span> <span class="n">GPS_UBX_ERR_OVERRUN</span><span class="p">;</span></div><div class='line' id='LC221'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">goto</span> <span class="n">error</span><span class="p">;</span></div><div class='line' id='LC222'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC223'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_class</span> <span class="o">=</span> <span class="n">c</span><span class="p">;</span></div><div class='line' id='LC224'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC225'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC226'>&nbsp;&nbsp;<span class="k">case</span> <span class="n">GOT_CLASS</span>:</div><div class='line' id='LC227'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_id</span> <span class="o">=</span> <span class="n">c</span><span class="p">;</span></div><div class='line' id='LC228'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC229'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC230'>&nbsp;&nbsp;<span class="k">case</span> <span class="n">GOT_ID</span>:</div><div class='line' id='LC231'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">len</span> <span class="o">=</span> <span class="n">c</span><span class="p">;</span></div><div class='line' id='LC232'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC233'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC234'>&nbsp;&nbsp;<span class="k">case</span> <span class="n">GOT_LEN1</span>:</div><div class='line' id='LC235'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">len</span> <span class="o">|=</span> <span class="p">(</span><span class="n">c</span><span class="o">&lt;&lt;</span><span class="mi">8</span><span class="p">);</span></div><div class='line' id='LC236'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">len</span> <span class="o">&gt;</span> <span class="n">GPS_UBX_MAX_PAYLOAD</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC237'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">error_last</span> <span class="o">=</span> <span class="n">GPS_UBX_ERR_MSG_TOO_LONG</span><span class="p">;</span></div><div class='line' id='LC238'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">goto</span> <span class="n">error</span><span class="p">;</span></div><div class='line' id='LC239'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC240'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_idx</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC241'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC242'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC243'>&nbsp;&nbsp;<span class="k">case</span> <span class="n">GOT_LEN2</span>:</div><div class='line' id='LC244'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_buf</span><span class="p">[</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_idx</span><span class="p">]</span> <span class="o">=</span> <span class="n">c</span><span class="p">;</span></div><div class='line' id='LC245'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_idx</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC246'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_idx</span> <span class="o">&gt;=</span> <span class="n">gps_ubx</span><span class="p">.</span><span class="n">len</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC247'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC248'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC249'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC250'>&nbsp;&nbsp;<span class="k">case</span> <span class="n">GOT_PAYLOAD</span>:</div><div class='line' id='LC251'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">c</span> <span class="o">!=</span> <span class="n">gps_ubx</span><span class="p">.</span><span class="n">ck_a</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC252'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">error_last</span> <span class="o">=</span> <span class="n">GPS_UBX_ERR_CHECKSUM</span><span class="p">;</span></div><div class='line' id='LC253'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">goto</span> <span class="n">error</span><span class="p">;</span></div><div class='line' id='LC254'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC255'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC256'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC257'>&nbsp;&nbsp;<span class="k">case</span> <span class="n">GOT_CHECKSUM1</span>:</div><div class='line' id='LC258'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">c</span> <span class="o">!=</span> <span class="n">gps_ubx</span><span class="p">.</span><span class="n">ck_b</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC259'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">error_last</span> <span class="o">=</span> <span class="n">GPS_UBX_ERR_CHECKSUM</span><span class="p">;</span></div><div class='line' id='LC260'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">goto</span> <span class="n">error</span><span class="p">;</span></div><div class='line' id='LC261'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC262'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_available</span> <span class="o">=</span> <span class="n">TRUE</span><span class="p">;</span></div><div class='line' id='LC263'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">goto</span> <span class="n">restart</span><span class="p">;</span></div><div class='line' id='LC264'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC265'>&nbsp;&nbsp;<span class="nl">default:</span></div><div class='line' id='LC266'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">error_last</span> <span class="o">=</span> <span class="n">GPS_UBX_ERR_UNEXPECTED</span><span class="p">;</span></div><div class='line' id='LC267'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">goto</span> <span class="n">error</span><span class="p">;</span></div><div class='line' id='LC268'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC269'>&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC270'>&nbsp;<span class="nl">error:</span></div><div class='line' id='LC271'>&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">error_cnt</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC272'>&nbsp;<span class="nl">restart:</span></div><div class='line' id='LC273'>&nbsp;&nbsp;<span class="n">gps_ubx</span><span class="p">.</span><span class="n">status</span> <span class="o">=</span> <span class="n">UNINIT</span><span class="p">;</span></div><div class='line' id='LC274'>&nbsp;&nbsp;<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC275'><span class="p">}</span></div><div class='line' id='LC276'><br/></div><div class='line' id='LC277'><br/></div><div class='line' id='LC278'><br/></div><div class='line' id='LC279'><span class="cm">/*</span></div><div class='line' id='LC280'><span class="cm"> *</span></div><div class='line' id='LC281'><span class="cm"> *</span></div><div class='line' id='LC282'><span class="cm"> * GPS dynamic configuration</span></div><div class='line' id='LC283'><span class="cm"> *</span></div><div class='line' id='LC284'><span class="cm"> *</span></div><div class='line' id='LC285'><span class="cm"> */</span></div><div class='line' id='LC286'><span class="cp">#ifdef GPS_CONFIGURE</span></div><div class='line' id='LC287'><br/></div><div class='line' id='LC288'><span class="cp">#define UBX_PROTO_MASK  0x0001</span></div><div class='line' id='LC289'><span class="cp">#define NMEA_PROTO_MASK 0x0002</span></div><div class='line' id='LC290'><span class="cp">#define RTCM_PROTO_MASK 0x0004</span></div><div class='line' id='LC291'><br/></div><div class='line' id='LC292'><span class="cp">#define GPS_PORT_DDC   0x00</span></div><div class='line' id='LC293'><span class="cp">#define GPS_PORT_UART1 0x01</span></div><div class='line' id='LC294'><span class="cp">#define GPS_PORT_UART2 0x02</span></div><div class='line' id='LC295'><span class="cp">#define GPS_PORT_USB   0x03</span></div><div class='line' id='LC296'><span class="cp">#define GPS_PORT_SPI   0x04</span></div><div class='line' id='LC297'><br/></div><div class='line' id='LC298'><span class="cp">#ifndef GPS_PORT_ID</span></div><div class='line' id='LC299'><span class="cp">#define GPS_PORT_ID GPS_PORT_UART1</span></div><div class='line' id='LC300'><span class="cp">#endif</span></div><div class='line' id='LC301'><br/></div><div class='line' id='LC302'><span class="cp">#define __UBX_GPS_BAUD(_u) _u##_BAUD</span></div><div class='line' id='LC303'><span class="cp">#define _UBX_GPS_BAUD(_u) __UBX_GPS_BAUD(_u)</span></div><div class='line' id='LC304'><span class="cp">#define UBX_GPS_BAUD _UBX_GPS_BAUD(GPS_LINK)</span></div><div class='line' id='LC305'><br/></div><div class='line' id='LC306'><span class="cm">/* Configure the GPS baud rate using the current uart baud rate. Busy</span></div><div class='line' id='LC307'><span class="cm">   wait for the end of the transmit. Then, BEFORE waiting for the ACK,</span></div><div class='line' id='LC308'><span class="cm">   change the uart rate. */</span></div><div class='line' id='LC309'><span class="cp">#if GPS_PORT_ID == GPS_PORT_UART1 || GPS_PORT_ID == GPS_PORT_UART2</span></div><div class='line' id='LC310'><span class="kt">void</span> <span class="nf">gps_configure_uart</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC311'><span class="cp">#ifdef FMS_PERIODIC_FREQ</span></div><div class='line' id='LC312'>&nbsp;&nbsp;<span class="n">UbxSend_CFG_PRT</span><span class="p">(</span><span class="n">GPS_PORT_ID</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x000008D0</span><span class="p">,</span> <span class="mi">38400</span><span class="p">,</span> <span class="n">UBX_PROTO_MASK</span><span class="p">,</span> <span class="n">UBX_PROTO_MASK</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">);</span></div><div class='line' id='LC313'>&nbsp;&nbsp;<span class="kt">uint8_t</span> <span class="n">loop</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC314'>&nbsp;&nbsp;<span class="k">while</span> <span class="p">(</span><span class="n">GpsUartRunning</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC315'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//doesn&#39;t work unless some printfs are used, so :</span></div><div class='line' id='LC316'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">loop</span><span class="o">&lt;</span><span class="mi">9</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC317'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;.&quot;</span><span class="p">);</span> <span class="n">loop</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC318'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC319'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\b</span><span class="s">&quot;</span><span class="p">);</span> <span class="n">loop</span><span class="o">--</span><span class="p">;</span></div><div class='line' id='LC320'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC321'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC322'><span class="cp">#else</span></div><div class='line' id='LC323'>&nbsp;&nbsp;<span class="n">UbxSend_CFG_PRT</span><span class="p">(</span><span class="n">GPS_PORT_ID</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x000008D0</span><span class="p">,</span> <span class="n">UBX_GPS_BAUD</span><span class="p">,</span> <span class="n">UBX_PROTO_MASK</span><span class="p">,</span> <span class="n">UBX_PROTO_MASK</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">);</span></div><div class='line' id='LC324'>&nbsp;&nbsp;<span class="k">while</span> <span class="p">(</span><span class="n">GpsUartRunning</span><span class="p">);</span> <span class="cm">/* FIXME */</span></div><div class='line' id='LC325'><span class="cp">#endif</span></div><div class='line' id='LC326'><br/></div><div class='line' id='LC327'>&nbsp;&nbsp;<span class="n">GpsUartInitParam</span><span class="p">(</span><span class="n">UBX_GPS_BAUD</span><span class="p">,</span>  <span class="n">UART_8N1</span><span class="p">,</span> <span class="n">UART_FIFO_8</span><span class="p">);</span></div><div class='line' id='LC328'><span class="p">}</span></div><div class='line' id='LC329'><span class="cp">#endif</span></div><div class='line' id='LC330'><br/></div><div class='line' id='LC331'><span class="cp">#if GPS_PORT_ID == GPS_PORT_DDC</span></div><div class='line' id='LC332'><span class="kt">void</span> <span class="nf">gps_configure_uart</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC333'>&nbsp;&nbsp;<span class="n">UbxSend_CFG_PRT</span><span class="p">(</span><span class="n">GPS_PORT_ID</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="n">GPS_I2C_SLAVE_ADDR</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="n">UBX_PROTO_MASK</span><span class="p">,</span> <span class="n">UBX_PROTO_MASK</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">,</span> <span class="mh">0x0</span><span class="p">);</span></div><div class='line' id='LC334'><span class="p">}</span></div><div class='line' id='LC335'><span class="cp">#endif</span></div><div class='line' id='LC336'><br/></div><div class='line' id='LC337'><span class="cp">#define IGNORED 0</span></div><div class='line' id='LC338'><span class="cp">#define RESERVED 0</span></div><div class='line' id='LC339'><br/></div><div class='line' id='LC340'><span class="cp">#ifdef USER_GPS_CONFIGURE</span></div><div class='line' id='LC341'><span class="cp">#include USER_GPS_CONFIGURE</span></div><div class='line' id='LC342'><span class="cp">#else</span></div><div class='line' id='LC343'><span class="k">static</span> <span class="n">bool_t</span> <span class="nf">user_gps_configure</span><span class="p">(</span><span class="n">bool_t</span> <span class="n">cpt</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC344'>&nbsp;&nbsp;<span class="k">switch</span> <span class="p">(</span><span class="n">cpt</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC345'>&nbsp;&nbsp;<span class="k">case</span> <span class="mi">0</span>:</div><div class='line' id='LC346'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//New ublox firmware v5 or higher uses CFG_NAV5 message, CFG_NAV is no longer available</span></div><div class='line' id='LC347'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//UbxSend_CFG_NAV(NAV_DYN_AIRBORNE_2G, 3, 16, 24, 20, 5, 0, 0x3C, 0x3C, 0x14, 0x03E8 ,0x0000, 0x0, 0x17, 0x00FA, 0x00FA, 0x0064, 0x012C, 0x000F, 0x00, 0x00);</span></div><div class='line' id='LC348'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">UbxSend_CFG_NAV5</span><span class="p">(</span><span class="mh">0x05</span><span class="p">,</span> <span class="n">NAV5_DYN_AIRBORNE_2G</span><span class="p">,</span> <span class="n">NAV5_3D_ONLY</span><span class="p">,</span> <span class="n">IGNORED</span><span class="p">,</span> <span class="n">IGNORED</span><span class="p">,</span> <span class="n">IGNORED</span><span class="p">,</span> <span class="n">IGNORED</span><span class="p">,</span> <span class="n">IGNORED</span><span class="p">,</span> <span class="n">IGNORED</span><span class="p">,</span> <span class="n">IGNORED</span><span class="p">,</span> <span class="n">IGNORED</span><span class="p">,</span> <span class="n">IGNORED</span><span class="p">,</span> <span class="n">RESERVED</span><span class="p">,</span> <span class="n">RESERVED</span><span class="p">,</span> <span class="n">RESERVED</span><span class="p">,</span> <span class="n">RESERVED</span><span class="p">);</span></div><div class='line' id='LC349'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC350'>&nbsp;&nbsp;<span class="k">case</span> <span class="mi">1</span>:</div><div class='line' id='LC351'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">UbxSend_CFG_MSG</span><span class="p">(</span><span class="n">UBX_NAV_ID</span><span class="p">,</span> <span class="n">UBX_NAV_POSUTM_ID</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC352'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC353'>&nbsp;&nbsp;<span class="k">case</span> <span class="mi">2</span>:</div><div class='line' id='LC354'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">UbxSend_CFG_MSG</span><span class="p">(</span><span class="n">UBX_NAV_ID</span><span class="p">,</span> <span class="n">UBX_NAV_VELNED_ID</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC355'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC356'>&nbsp;&nbsp;<span class="k">case</span> <span class="mi">3</span>:</div><div class='line' id='LC357'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">UbxSend_CFG_MSG</span><span class="p">(</span><span class="n">UBX_NAV_ID</span><span class="p">,</span> <span class="n">UBX_NAV_STATUS_ID</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">1</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC358'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC359'>&nbsp;&nbsp;<span class="k">case</span> <span class="mi">4</span>:</div><div class='line' id='LC360'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">UbxSend_CFG_MSG</span><span class="p">(</span><span class="n">UBX_NAV_ID</span><span class="p">,</span> <span class="n">UBX_NAV_SVINFO_ID</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">4</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC361'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC362'>&nbsp;&nbsp;<span class="k">case</span> <span class="mi">5</span>:</div><div class='line' id='LC363'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">UbxSend_CFG_MSG</span><span class="p">(</span><span class="n">UBX_NAV_ID</span><span class="p">,</span> <span class="n">UBX_NAV_SOL_ID</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">8</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC364'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC365'>&nbsp;&nbsp;<span class="k">case</span> <span class="mi">6</span>:</div><div class='line' id='LC366'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">UbxSend_CFG_SBAS</span><span class="p">(</span><span class="mh">0x00</span><span class="p">,</span> <span class="mh">0x00</span><span class="p">,</span> <span class="mh">0x00</span><span class="p">,</span> <span class="mh">0x00</span><span class="p">,</span> <span class="mh">0x00</span><span class="p">);</span></div><div class='line' id='LC367'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC368'>&nbsp;&nbsp;<span class="k">case</span> <span class="mi">7</span>:</div><div class='line' id='LC369'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">UbxSend_CFG_RATE</span><span class="p">(</span><span class="mh">0x00FA</span><span class="p">,</span> <span class="mh">0x0001</span><span class="p">,</span> <span class="mh">0x0000</span><span class="p">);</span></div><div class='line' id='LC370'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">FALSE</span><span class="p">;</span></div><div class='line' id='LC371'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC372'>&nbsp;&nbsp;<span class="k">return</span> <span class="n">TRUE</span><span class="p">;</span> <span class="cm">/* Continue, except for the last case */</span></div><div class='line' id='LC373'><span class="p">}</span></div><div class='line' id='LC374'><span class="cp">#endif </span><span class="c1">// ! USER_GPS_CONFIGURE</span></div><div class='line' id='LC375'><br/></div><div class='line' id='LC376'><span class="cm">/* GPS configuration. Must be called on ack message reception while</span></div><div class='line' id='LC377'><span class="cm">   gps_status_config &lt; GPS_CONFIG_DONE */</span></div><div class='line' id='LC378'><span class="kt">void</span> <span class="nf">gps_configure</span><span class="p">(</span> <span class="kt">void</span> <span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC379'>&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_class</span> <span class="o">==</span> <span class="n">UBX_ACK_ID</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC380'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">gps_ubx</span><span class="p">.</span><span class="n">msg_id</span> <span class="o">==</span> <span class="n">UBX_ACK_ACK_ID</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC381'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">gps_status_config</span><span class="o">++</span><span class="p">;</span></div><div class='line' id='LC382'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC383'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC384'>&nbsp;&nbsp;<span class="n">gps_configuring</span> <span class="o">=</span> <span class="n">user_gps_configure</span><span class="p">(</span><span class="n">gps_status_config</span><span class="p">);</span></div><div class='line' id='LC385'><span class="p">}</span></div><div class='line' id='LC386'><span class="cp">#endif </span><span class="cm">/* GPS_CONFIGURE */</span><span class="cp"></span></div><div class='line' id='LC387'><br/></div><div class='line' id='LC388'><span class="kt">void</span> <span class="nf">ubxsend_cfg_rst</span><span class="p">(</span><span class="kt">uint16_t</span> <span class="n">bbr</span> <span class="p">,</span> <span class="kt">uint8_t</span> <span class="n">reset_mode</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC389'><span class="cp">#ifdef GPS_LINK</span></div><div class='line' id='LC390'>&nbsp;&nbsp;<span class="n">UbxSend_CFG_RST</span><span class="p">(</span><span class="n">bbr</span><span class="p">,</span> <span class="n">reset_mode</span><span class="p">,</span> <span class="mh">0x00</span><span class="p">);</span></div><div class='line' id='LC391'><span class="cp">#endif </span><span class="cm">/* else less harmful for HITL */</span><span class="cp"></span></div><div class='line' id='LC392'><span class="p">}</span></div><div class='line' id='LC393'><br/></div><div class='line' id='LC394'><br/></div><div class='line' id='LC395'><br/></div></pre></div>
              
            
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
  <img src="https://gs1.wac.edgecastcdn.net/80460E/assets/images/modules/ajax/big_spinner_336699.gif" height="32" width="32">
</div>

    </div>
  
      
    </div>

    <div id="footer" class="clearfix">
      <div class="site">
        
          <div class="sponsor">
            <a href="http://www.rackspace.com" class="logo">
              <img alt="Dedicated Server" height="36" src="https://gs1.wac.edgecastcdn.net/80460E/assets/images/modules/footer/rackspace_logo.png?v2" width="38" />
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
          <li class="main">&copy; 2011 <span id="_rrt" title="0.15246s from fe3.rs.github.com">GitHub</span> Inc. All rights reserved.</li>
          <li><a href="/site/terms">Terms of Service</a></li>
          <li><a href="/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
        </ul>
      </div>
    </div><!-- /#footer -->

    <script>window._auth_token = "efb8f9d13c7d576e742c952b97c16e084ce72294"</script>
    

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
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
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

    
    
    
    <script type="text/javascript">(function(){var d=document;var e=d.createElement("script");e.async=true;e.src="https://d1ros97qkrwjf5.cloudfront.net/14/eum/rum.js	";e.type="text/javascript";var s=d.getElementsByTagName("script")[0];s.parentNode.insertBefore(e,s);})();NREUMQ.push(["nrf2","beacon-1.newrelic.com","2f94e4d8c2",64799,"dw1bEBZcX1RWRhoEClsAGhcMXEQ=",0.0,131,new Date().getTime()])</script>
  </body>
</html>

